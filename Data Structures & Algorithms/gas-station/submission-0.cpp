class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        //(i+1)%n
        //tank = tank-cost[i]+gas[i];
        int n=gas.size();
        int currgas=0;
        int totalgas=0;
        int startidx=0;
        for(int i=0;i<n;i++){
            totalgas+=gas[i]-cost[i];
            currgas+=gas[i]-cost[i];
            if(currgas<0){
                startidx=i+1;
                currgas=0;
            }
        }
        return totalgas>=0?startidx:-1;
        
    }
};
