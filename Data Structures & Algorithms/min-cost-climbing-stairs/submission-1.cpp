class Solution {
public:

    int t[101];
    int solve(int i,vector<int>& cost){
        if(i>=cost.size()){
            return 0;
        }
        if(t[i]!=-1){
            return t[i];
        }
        int c=0;
        c+=cost[i] + min(solve(i+1,cost),solve(i+2,cost));

        return t[i]=c;

    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int minans=INT_MAX;
        for(int i=0;i<=n;i++){
            t[i]=-1;
        }
        minans=min(minans,min(solve(0,cost),solve(1,cost)));
        return minans;
    }
};
