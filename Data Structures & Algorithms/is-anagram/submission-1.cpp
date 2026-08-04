class Solution {
public:
    bool isAnagram(string s, string t) {
        int m=s.length();
        int n=t.length();
        if(m!=n){
            return false;
        }
        map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }

        for(int i=0;i<n;i++){
            if(mp.find(t[i])!=mp.end()){
                mp[t[i]]--;
                if(mp[t[i]]==0){
                    mp.erase(t[i]);
                }
            }
        }
        return mp.size()==0;
    }
};
