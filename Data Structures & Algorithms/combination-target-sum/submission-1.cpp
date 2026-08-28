class Solution {
public:

    void solve(vector<int>& nums,int i, int target, vector<vector<int>>&s, vector<int>temp){
        if(target==0){
            s.push_back(temp);
            return;
        }
        
        if(i==nums.size()){
            return;
        }
        
        if(nums[i]<=target){
            //take or not take + repeat
            temp.push_back(nums[i]);
            //repeat
            solve(nums,i, target-nums[i],s, temp);
            //backtrack
            temp.pop_back();
        }
        solve(nums,i+1,target,s,temp);
        return;
    }


    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int n=nums.size();
        // sum+nums[i] = target
        
        vector<vector<int>>s;
        vector<int>temp;
        solve(nums,0,target,s,temp);
        return s;
        
    }
};
