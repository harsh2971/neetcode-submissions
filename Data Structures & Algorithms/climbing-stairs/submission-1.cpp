class Solution {
public:
    int t[46];
    int solve(int n){
        if(n<=1){
            return t[n]=1;
        }
        if(t[n]!=-1){
            return t[n];
        }
        return t[n]=solve(n-1)+solve(n-2);
    }

    int climbStairs(int n) {
        for (int i = 0; i <= n; i++){
             t[i] = -1;
        }
           
       return solve(n);
       //return t[n];

    }
};
