class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end()){
                return true;
            }
            else {
                mp[nums[i]]++;
            }
        }
        return false;
    }
};