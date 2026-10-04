class Solution {
public:
    vector<int>t = vector<int>(46,-1);
    int climbStairs(int n) {
        t[0]=1;
        t[1]=1;
        if(t[n]!=-1){
            return t[n];
        }
        return t[n]=climbStairs(n-1)+climbStairs(n-2);

    }
};
