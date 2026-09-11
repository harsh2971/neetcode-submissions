class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        
        int maxsum=INT_MIN;
        int sum=0;
        int start=0;
        int ansStart=-1;
        int ansEnd=-1;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(sum<0){
                sum=0;
                start=i;
            }
            sum+=nums[i];
            if(sum>maxsum){
                maxsum=sum;
                ansStart=start;
                ansEnd=i;
            }
        }
        for(int i=ansStart;i<=ansEnd;i++){
            ans.push_back(nums[i]);
            cout<<nums[i]<<" ";
        }
        // int maxend=nums[0];
        // int maxsum=nums[0];

        // for(int i=1;i<n;i++){
        //     //either start with new maxEnd or extend to ongoing sum
        //     maxend=max(nums[i],nums[i]+maxend);
        //     maxsum=max(maxsum,maxend);
        // }
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
