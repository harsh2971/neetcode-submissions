class Solution {
public:
    vector<vector<string>>ans;       

    bool isvalid(vector<string>v,int row,int col){
        for(int i=0;i<v.size();i++){
            if(v[i][col]=='Q'){
                return false;
            }
        }
        //right diagonal
        for(int i=row-1,j=col+1;i>=0 && j<v.size();i--,j++){
            if(v[i][j]=='Q'){
                return false;
            }
        }
        //left diagonal
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            if(v[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }


    void solve(vector<string>v, int row){
        if(row==v.size()){
            ans.push_back(v);
            return;
        }

        //now on that row check column-wise
        for(int i=0;i<v.size();i++){
            if(isvalid(v,row,i)){
                v[row][i]='Q';
                solve(v,row+1);//next row
                v[row][i]='.';
            }
        }
        return;
    }


    vector<vector<string>> solveNQueens(int n) {
        //send first row->
        vector<string>v(n,string(n,'.'));

        solve(v,0);//first row(0) sent
        return ans;
    }
};
