class Solution {
public:

    void solve(vector<int>& candidates,int i, int target, vector<int>temp, set<vector<int>>& s){
        if(target==0){
            s.insert(temp);
            return;
        }
        if(i==candidates.size()){
            return;
        }

        for(int idx=i;idx<candidates.size();idx++){
            if(i!=idx && candidates[idx]==candidates[idx-1]){
                continue;
            }
            if(candidates[idx]<=target){
                temp.push_back(candidates[idx]);
                solve(candidates,idx+1,target-candidates[idx],temp,s);
                temp.pop_back();
            }
        }
        return;
    }



    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        set<vector<int>>s;
        vector<vector<int>>ans;
        solve(candidates,0,target,temp,s);
        for(auto i:s){
            ans.push_back(i);
        }
        return ans;
    }
};
