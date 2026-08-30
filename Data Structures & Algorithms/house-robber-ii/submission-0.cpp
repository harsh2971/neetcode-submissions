class Solution {
public:

    int solve(vector<int>& nums,int i,vector<int>& t){
        int n=nums.size();
        if(i>=n){
            return 0;
        }
        if(t[i]!=-1){
            return t[i];
        }

        int choice1=nums[i]+solve(nums,(i+2),t);
        int choice2=solve(nums,(i+1),t);

        return t[i]=max(choice1,choice2);
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>t1(n+1,-1);
        vector<int>t2(n+1,-1);
        vector<int>temp1(nums.begin(),nums.end()-1);
        vector<int>temp2(nums.begin()+1,nums.end());
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        return max(solve(temp1,0,t1),solve(temp2,0,t2));

    }
};
