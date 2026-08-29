class Solution {
public:

    void solve(vector<int>& nums,int i,vector<int>temp, set<vector<int>>& s){
        if(i==nums.size()){
            s.insert(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(nums,i+1,temp,s);
        temp.pop_back();
        solve(nums,i+1,temp,s);
        return;
    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>temp;
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        solve(nums,0,temp,s);
        vector<vector<int>>ans;
        for(auto i: s){
            ans.push_back(i);
        }
        return ans;
    }
};
