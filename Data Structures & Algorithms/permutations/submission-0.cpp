class Solution {
public:

    void solve(vector<int>& nums,vector<int> temp, map<int,int>& mp,vector<vector<int>>& ans){
        if(mp.size()==temp.size()){
            ans.push_back(temp);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(mp[i]==0){
                mp[i]=1;
                temp.push_back(nums[i]);
                solve(nums,temp,mp,ans);
                mp[i]=0;
                temp.pop_back();
            }
        }
        return;
    }


    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[i]=0;
        }
        vector<int>temp;
        vector<vector<int>>ans;
        solve(nums,temp,mp,ans);
       
        return ans;
    }
};
