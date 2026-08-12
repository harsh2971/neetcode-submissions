class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){return 0;}
        unordered_set<int>s(nums.begin(),nums.end());
        int maxlen=0;
        for(auto i:s){
            int cnt=0;
            // only if reverse sequence doesnt exist 
            // to avoid traversing duplicate sequence
            if(!s.count(i-1)){
                cnt=1;// +1, +2, +3,.... -> 2,3,4,5,...
                while(s.count(i+cnt)){
                    cnt++;
                }
                maxlen=max(maxlen,cnt);
            }
        }
        return maxlen;
    }
};
