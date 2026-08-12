class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        map<int,int>mp;
        int maxlen=0;

        int i=0;
        int j=0;
        while(j<n){
            mp[s[j]]++;
            while(mp.size()<j-i+1){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                mp.erase(s[i]);
            }
                i++;

        }
        if(mp.size()==j-i+1){
            maxlen=max(maxlen,j-i+1);
        }
            
            j++;
        }

        return maxlen;
    }
};
