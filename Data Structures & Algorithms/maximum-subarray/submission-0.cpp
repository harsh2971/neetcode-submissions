class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int maxsum=INT_MIN;
        int neg=0;
        for(auto i:nums){if(i<0){neg++;}}
        if(neg==n){return *max_element(nums.begin(),nums.end());}
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum<=0){
                sum=0;
            }
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};
