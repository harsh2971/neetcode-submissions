class Solution {
public:
    int lastStoneWeight(vector<int>& arr) {
        int n=arr.size();
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }

        while(pq.size()>1){
            int temp1=pq.top();
            pq.pop();
            int temp2=pq.top();
            pq.pop();
            pq.push(temp1-temp2);
        }

        return pq.top();
    }
};
