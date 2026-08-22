class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int minans=INT_MAX;
        //pivot-> whichever is sorted part -> find min and switch the search space
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[start]<=nums[mid]){//sorted part
                minans=min(minans,nums[start]);
                start=mid+1;
            }
            else if(nums[end]>=nums[mid]){//sorted part
                minans=min(minans,nums[mid]);
                end=mid-1;
            }
        }
        return minans;
    }
};
