class Solution {
public:

    int t[101];
    int solve(vector<int>& nums,int i){
        if(i>=nums.size()){
            return 0;
        }
        if(t[i]!=-1){
            return t[i];
        }
        int amt=0;
        int choice1=nums[i]+solve(nums,i+2);
        int choice2=solve(nums,i+1);

        amt+=max(choice1,choice2);
        return t[i]=amt;
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<=100;i++){
            t[i]=-1;
        }
        return solve(nums,0);

    }
};
