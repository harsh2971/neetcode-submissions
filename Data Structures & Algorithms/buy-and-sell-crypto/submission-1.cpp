class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprofit=0;
        int mintillnow=INT_MAX;
        //keep track of min
        for(int i=0;i<n;i++){
          mintillnow=min(mintillnow,prices[i]);
          maxprofit=max(maxprofit,prices[i]-mintillnow);
        }
        return maxprofit;
    }
};
