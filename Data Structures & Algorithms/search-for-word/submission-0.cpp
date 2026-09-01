class Solution {
public:

    bool vis[6][6]={false,false};
    bool solve(vector<vector<char>>& board, string word,int i,int j,int k){
        if(k==word.length()){
            return true;
        }
        
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]!=word[k] || vis[i][j]){
            return false;
        }

        vis[i][j]=true;
        if(solve(board,word,i+1,j,k+1) || 
        solve(board,word,i,j+1,k+1) || 
        solve(board,word,i,j-1,k+1) || 
        solve(board,word,i-1,j,k+1)){return true;}
        vis[i][j]=false;

        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(word[0]==board[i][j]){
                    if(solve(board,word,i,j,0)){return true;}
                }
            }
        }
        return false;
    }
};
