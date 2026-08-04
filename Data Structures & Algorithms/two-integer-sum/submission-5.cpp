class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int n=nums.size();
        int j=n-1;
        // while(i<j){
        //     if(nums[i]+nums[j]==target){return {i,j};}
        //     else if(nums[i]+nums[j]<target){i++;}
        //     else{j--;}
        // }

        // return {-1,-1};

        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            if(mp.find(target-nums[i])!=mp.end() && i!=mp[target-nums[i]]){
                return {i,mp[target-nums[i]]};
            }
        }

        return {};
        
    }
};
