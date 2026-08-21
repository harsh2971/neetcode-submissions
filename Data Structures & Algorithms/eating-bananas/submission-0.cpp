class Solution {
public:

    bool isvalid(vector<int>& piles,int mid,int h){
        int hrs=0;
        for(int i=0;i<piles.size();i++){
            hrs+=piles[i]/mid;
            if(piles[i]%mid!=0){
                hrs++;
            }
        }
        return hrs<=h;
    }


    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int start=1;
        int end=*max_element(piles.begin(),piles.end());
        int ans=INT_MAX;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(isvalid(piles,mid,h)){
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
