class Solution {
public:

    void solve(vector<int>& nums,int i, vector<int>temp,set<vector<int>>& ans){
        if(i==nums.size()){
            ans.insert(temp);
            return;
        }
        //take
        temp.push_back(nums[i]);
        solve(nums,i+1,temp,ans);

        //backtrack->
        temp.pop_back();
        //not take
        solve(nums,i+1,temp,ans);

        return;

    }


    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        set<vector<int>>ans;
        solve(nums,0,temp,ans);
        vector<vector<int>>ans1;
        for(auto i:ans){
            ans1.push_back(i);
        }
        return ans1;

    }
};
