class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){return 0;}
        unordered_set<int>s(nums.begin(),nums.end());
        int maxlen=0;
        for(int i=0;i<n;i++){
            int cnt=0;
            // only if reverse sequence doesnt exist 
            // to avoid traversing duplicate sequence
            if(s.find(nums[i]-1)==s.end()){
                cnt=1;// +1, +2, +3,.... -> 2,3,4,5,...
                while(s.find(nums[i]+cnt)!=s.end()){
                    cnt++;
                }
                maxlen=max(maxlen,cnt);
            }
        }
        return maxlen;
    }
};
