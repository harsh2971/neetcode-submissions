/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    // int solve(TreeNode* root){
    //     if(!root){
    //         return 0;
    //     }
    //     int ans=0;
    //     if(root){
    //         ans++;
    //     }
    //     int l = solve(root->left);
    //     int r = solve(root->right);
    //     ans=max(ans,())
    // }

    
    int maxDepth(TreeNode* root) {
        if(!root){
            return 0;
        }
        
        int l = maxDepth(root->left);
        int r = maxDepth(root->right);
        return 1+max(l,r);
    }
};
