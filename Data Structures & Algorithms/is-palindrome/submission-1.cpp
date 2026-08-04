class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string s1="";
        for(int i=0;i<n;i++){
            if(s[i]!=' ' && ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) || (s[i]>='0' && s[i]<='9')){
                s1+=s[i];
            }
        }
        cout<<s1<<endl;
        int i=0;int j=s1.length()-1;
        while(i<j){
            
            if(tolower(s1[i])!=tolower(s1[j])){cout<<s1[i]<<" "<<s1[j]<<endl; return false;}
            i++;j--;
        }
        return true;
    }
};
