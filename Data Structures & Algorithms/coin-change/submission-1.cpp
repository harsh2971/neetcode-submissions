class Solution {
public:
    
    vector<vector<int>>t=vector<vector<int>>(11,vector<int>(100001,-1));
    int solve(vector<int>& coins,int i,int amount){
        if(i>=coins.size()){
            return t[i][amount]=INT_MAX-1;
        }
        if(t[i][amount]!=-1){
            return t[i][amount];
        }
        if(amount==0){
            return t[i][amount]=0;
        }
        
        int choice1=INT_MAX;
        int choice2=INT_MAX;
        if(coins[i]<=amount){
            choice1 = 1+solve(coins,i,amount-coins[i]);
        }
        choice2 = solve(coins,i+1,amount);
        return t[i][amount]=min(choice1,choice2);
    }


    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int ans = solve(coins,0,amount);
        return ans==INT_MAX-1?-1:ans;
    }
};
