class Solution {
public:

    vector<vector<int>>t = vector<vector<int>>(101,vector<int>(101,-1));
    int solve(int i,int j,int m,int n){
        if(i>=m || j>=n){
            return t[i][j]=0;
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        if(i==m-1 && j==n-1){
            return t[i][j]=1;
        }

        // if(i==m-1){
        //     return t[i][j]=solve(i,j+1,m,n);
        // }
        // if(j==n-1){
        //     return t[i][j]=solve(i+1,j,m,n);
        // }

        return t[i][j]=solve(i+1,j,m,n) + solve(i,j+1,m,n);
    }


    int uniquePaths(int m, int n) {
        return solve(0,0,m,n);
    }
};
