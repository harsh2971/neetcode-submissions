class Solution {
public:

    static bool cmp(pair<int,int>&a,pair<int,int>&b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        return a.second<b.second;
    }


    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int cnt=0;
        vector<pair<int,int>>ans;
        for(int i=0;i<n;i++){
            ans.push_back({intervals[i][0],intervals[i][1]});
        }
        sort(ans.begin(),ans.end(),cmp);
        for(auto i:ans){
            cout<<i.first<<" "<<i.second<<" ";
        }
        int i=0;int j=1;
        while(j<n){
            if(ans[i].second>ans[j].first){
               cnt++;
               j++;
            }
            else{
                i=j;
                j++;
            }
        }
        return cnt;

    }
};
