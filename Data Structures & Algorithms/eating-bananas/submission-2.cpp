class Solution {
public:

    bool isvalid(vector<int>& piles,int h,int k){
        int n=piles.size();
        long long int hrs=0;
        for(int i=0;i<n;i++){
            hrs+=piles[i]/k;
            if(piles[i]%k){
                hrs++;
            }
        }
        return hrs<=h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();

        // if piles[i]%k != 0 -> hrs++;
        // hrs+=piles[i]/k
        long long int start=1;
        long long int end=*max_element(piles.begin(),piles.end());
        int ans=INT_MAX;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(isvalid(piles,h,mid)){
                ans=min(ans,mid);
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;

    }
};
