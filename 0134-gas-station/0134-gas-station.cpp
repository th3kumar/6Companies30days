class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int t_surplus = 0, surplus = 0, index = 0;
        for(int i = 0; i < n; i++){
            t_surplus += gas[i] - cost[i];
            surplus += gas[i] - cost[i];
            if(surplus < 0){
                surplus = 0;
                index = i+1;
            }
        } return (t_surplus < 0) ? -1 : index ;
    }
};