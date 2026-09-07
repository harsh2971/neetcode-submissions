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

    bool check(TreeNode* root,int maxval, int minval){
        if(!root){
            return true;
        }
       if(root->val <= minval || root->val >= maxval){
            return false;
       }

        return check(root->left, root->val,minval) && check(root->right,maxval,root->val);
    }

    bool isValidBST(TreeNode* root) {
        //if r->val <= r->left
        //if r->val >= r->right
        //false
        if(!root->left && !root->right){
            return true;
        }
        int minval=INT_MIN;
        int maxval=INT_MAX;
        return check(root,maxval,minval);
    }
};
