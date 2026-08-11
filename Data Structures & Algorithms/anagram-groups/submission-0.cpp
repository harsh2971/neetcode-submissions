class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(int i=0;i<n;i++){
            string sorted=strs[i];
            sort(sorted.begin(),sorted.end());
            mp[sorted].push_back(strs[i]);
        }

        for(auto i:mp){
            ans.push_back(i.second);
        }

        return ans;
    }
};
