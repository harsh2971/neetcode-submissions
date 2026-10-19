class Solution {
public:

    vector<vector<int>>t=vector<vector<int>>(1001,vector<int>(1001,-1)); 
    int solve(string s1, string s2,int i, int j, int m, int n){
        if(t[i][j]!=-1){
            return t[i][j];
        }
        
        if(i>=m || j>=n){
            return t[i][j]=0;
        }
        
        if(s1[i]==s2[j]){
            return t[i][j]=1+solve(s1,s2,i+1,j+1,m,n);
        }
        else{
            return t[i][j]=max(solve(s1,s2,i,j+1,m,n),solve(s1,s2,i+1,j,m,n));
        }
        return t[i][j]=0;

    }


    int longestCommonSubsequence(string s1, string s2) {
        int m=s1.length();
        int n=s2.length();

        return solve(s1,s2,0,0,m,n);


    }
};
