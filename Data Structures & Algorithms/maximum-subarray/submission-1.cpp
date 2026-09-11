class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxend=nums[0];
        int maxsum=nums[0];

        for(int i=1;i<n;i++){
            maxend=max(nums[i],nums[i]+maxend);
            maxsum=max(maxsum,maxend);
        }
        return maxsum;
        // int maxsum=INT_MIN;
        // int neg=0;
        // for(auto i:nums){if(i<0){neg++;}}
        // if(neg==n){return *max_element(nums.begin(),nums.end());}
        // for(int i=0;i<n;i++){
        //     sum+=nums[i];
        //     if(sum<=0){
        //         sum=0;
        //     }
        //     maxsum=max(maxsum,sum);
        // }
        // return maxsum;
    }
};
