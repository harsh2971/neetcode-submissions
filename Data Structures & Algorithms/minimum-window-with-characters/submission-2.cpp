class Solution {
public:
    string minWindow(string s, string t) {
        int m=s.length();
        int n=t.length();
        if(m<n){
            return "";
        }
        map<int,int>mp;
        for(auto i:t){
            mp[i]++;
        }

        int j=0;
        int i=0;
        int req=n;
        string ans="";
        int start=0;
        int minlen=INT_MAX;
        while(j<m){
            //add to the window
            if(mp[s[j]]>0){
                req--;
            }
            mp[s[j]]--;

            //when u have all characters-> shrink the window from left
            //
            while(req==0){
                //calculate window size when we have what we require
                if(j-i+1<minlen){
                    minlen=j-i+1;
                    start=i;
                    //ans=s.substr(i,j-i+1);
                }
                //shrink the window
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    req++;
                }
                i++;
            }
            j++;
        }
        
        return minlen==INT_MAX?"":s.substr(start,minlen);

        

    }
};
