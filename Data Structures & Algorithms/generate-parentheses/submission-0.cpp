class Solution {
public:

    void solve(int open,int close, vector<string>& ans,string temp){
        if(open==0 && close==0){
            ans.push_back(temp);
            return;
        }

        if(open>0){
            solve(open-1,close,ans,temp+'(');
        }
        if(close>open){
            solve(open,close-1,ans,temp+')');
        }
        return;
    }


    vector<string> generateParenthesis(int n) {
        
        vector<string>ans;
        string temp="";
        solve(n,n,ans,temp);
        return ans;
    }
};
