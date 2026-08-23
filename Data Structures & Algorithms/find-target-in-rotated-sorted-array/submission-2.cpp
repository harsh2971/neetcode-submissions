class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        //same logic as min in rotated sorted array
        //check in which range does target lies
        //switch to that search space
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(nums[mid]==target){return mid;}
            if(nums[mid]>=nums[start]){
                if(target<=nums[mid] && target>=nums[start]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            else if(nums[mid]<=nums[end]){
                if(target<=nums[end] && target>=nums[mid]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};
