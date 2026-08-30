class Solution {
public:

    int solve(vector<int>& nums,int i, vector<int>& t){
        if(i>=nums.size()){
            return 0;
        }
        if(t[i]!=-1){
            return t[i];
        }
        int choice1=nums[i]+solve(nums,i+2,t);
        int choice2=solve(nums,i+1,t);
        return t[i]=max(choice1,choice2);
    }


    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>t(n+1,-1);
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }

        return solve(nums,0,t);

    }
};
