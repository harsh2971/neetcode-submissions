class Solution {
public:

    vector<vector<int>>t=vector<vector<int>>(10001,vector<int>(101,-1));
    bool solve(vector<int>& arr,int i,int sum){
       if(sum==0){
            return t[sum][i]=true;
        }
        if(t[sum][i]!=-1){
            return t[sum][i];
        }
        
        if(i>=arr.size()){
            return t[sum][i]=false;
        }
        
        bool choice1=false;
        bool choice2=false;
        if(arr[i]<=sum){
            choice1=solve(arr,i+1,sum-arr[i]);
        }
        choice2=solve(arr,i+1,sum);
        return t[sum][i]=choice1 || choice2;
    }
    
    bool canPartition(vector<int>& nums) {
        int target=accumulate(nums.begin(),nums.end(),0);
        if(target%2){
            return false;
        }
        target/=2;
        cout<<target<<endl;
        return solve(nums,0,target);
        
    }
};