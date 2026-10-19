class Solution {
public:
    
    vector<vector<int>>t=vector<vector<int>>(101,vector<int>(101,-1));
    int solve(vector<vector<int>>& matrix,int i,int j,int m,int n,int prev){
        if(i>=m || j>=n || i<0 || j<0 || matrix[i][j]<=prev){
            return 0;
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        int l1=1+solve(matrix,i+1,j,m,n,matrix[i][j]);
        int l2=1+solve(matrix,i,j+1,m,n,matrix[i][j]);
        int r1=1+solve(matrix,i-1,j,m,n,matrix[i][j]);
        int r2=1+solve(matrix,i,j-1,m,n,matrix[i][j]);
        return t[i][j]=max(l1,max(l2,max(r1,r2)));
    }


    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

       int maxv=INT_MIN;
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            maxv=max(maxv,solve(matrix,i,j,m,n,-1));
        }
       }
       return maxv;
    }
};



