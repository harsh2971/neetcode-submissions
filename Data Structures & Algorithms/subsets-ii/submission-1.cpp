class Solution {
public:

    void solve(vector<int>& nums, int i, vector<int> temp,
           vector<vector<int>>& ans) {

    ans.push_back(temp);


    for (int idx = i; idx < nums.size(); idx++) {

        if (i != idx && nums[idx] == nums[idx - 1]) {
            continue;
        }

        temp.push_back(nums[idx]);
        solve(nums, idx + 1, temp, ans);
        temp.pop_back();
    }
}

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        solve(nums,0,temp,ans);
    
        return ans;
    }
};
