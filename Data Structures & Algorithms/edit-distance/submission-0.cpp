class Solution {
public:

    vector<vector<int>>t=vector<vector<int>>(101,vector<int>(101,-1));
    int solve(string s1,string s2,int i,int j,int m,int n){
        if(i==s1.length()){
            return t[i][j]=n-j;
        }
        if(j==s2.length()){
            return t[i][j]=m-i;
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        int choice1=0;
        int choice2=0;
        if(s1[i]==s2[j]){
            choice1=solve(s1,s2,i+1,j+1,m,n);
            t[i][j]=choice1;
        }
        else{
            choice2=1+min(solve(s1,s2,i,j+1,m,n),min(solve(s1,s2,i+1,j,m,n),solve(s1,s2,i+1,j+1,m,n)));
            t[i][j]=choice2;
        }
        return t[i][j];
    }


    int minDistance(string word1, string word2) {
        int m=word1.length();
        int n=word2.length();
        return solve(word1,word2,0,0,m,n);

    }
};
