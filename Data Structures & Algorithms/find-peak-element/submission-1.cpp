class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        if(n==1){return 0;}
        
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid+1<n && nums[mid]<nums[mid+1]){
                start=mid+1;
            }
            else if(mid-1>=0 && nums[mid]<nums[mid-1]){
                end=mid-1;
            }

            else if(mid-1>=0  && nums[mid]>nums[mid-1] && mid+1<n && nums[mid]>nums[mid+1] || 
            (mid==0 && nums[mid]>nums[mid+1]) || (mid==n-1 && nums[mid]>nums[mid-1])){
                return mid;
            }
        }
        return -1;
    }
};