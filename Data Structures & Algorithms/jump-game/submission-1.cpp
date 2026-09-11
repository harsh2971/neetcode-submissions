class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxpos=0;
        for(int i=0;i<n;i++){
            //at any index if farthest that can be reached is less than index(position)
            if(i>maxpos){
                return false;
            }
            maxpos=max(maxpos,nums[i]+i);
          
        }
        return true;
    }
};
