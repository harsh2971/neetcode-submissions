class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        //XOR gives 1 when 2 bits are different
        // x^0=x
        // x^x=0
        // 0^7^6^6^7^8
        int ans=0;
        for(int i=0;i<n;i++){
            ans^=nums[i];
        }
        return ans;
    }
};
