class Solution {
public:
    int t[101];
    int solve(vector<int>& cost, int i){
        if(i>=cost.size()){
            return t[i]=0;
        }
        if(t[i]!=-1){
            return t[i];
        }
        int c=0;
        int choice1=solve(cost,i+1);
        int choice2=INT_MAX;
        if(i<=cost.size()-2){
            choice2=solve(cost,i+2);
        }
        c+=cost[i] + min(choice1,choice2);
        return t[i]=c;
    }


    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int minans=INT_MAX;
        for(int i=0;i<=100;i++){
            t[i]=-1;
        }
        minans = min(minans, min(solve(cost,0),solve(cost,1)));
        return minans;
    }
};
