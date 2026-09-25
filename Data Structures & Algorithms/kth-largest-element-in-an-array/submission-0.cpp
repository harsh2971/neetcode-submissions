class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int>pq;
        k--;
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        while(pq.size() && k>0){
            pq.pop();k--;
        }
        return pq.top();
    }
};

// 1 1 2 3 4 5 5
// 5 5 4 3 2 1 1