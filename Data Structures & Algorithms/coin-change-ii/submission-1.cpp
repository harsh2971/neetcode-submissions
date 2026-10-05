class Solution {
public:

    vector<vector<int>>t=vector<vector<int>>(101,vector<int>(5001,-1));
    int solve(int amount,int i, vector<int>& coins){
        if(i>=coins.size()){
            return t[i][amount]=0;
        }
        if(t[i][amount]!=-1){
            return t[i][amount];
        }
        if(amount==0){
            return t[i][amount]=1;
        }

        int choice1=solve(amount,i+1,coins);
        int choice2=0;
        if(coins[i]<=amount){
            choice2=solve(amount-coins[i],i,coins);
        }
        return t[i][amount]=choice1+choice2;
    }


    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        return solve(amount,0,coins);
    }
};
