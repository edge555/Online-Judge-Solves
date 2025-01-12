class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int cur=0,fuel=0,costt=0;
        int diff=0,st=0;

        for(int i=0;i<gas.size();i++){
            fuel+=gas[i];
        }

        for(int i=0;i<gas.size();i++){
            costt+=cost[i];
        }

        if(fuel<costt) {
            return -1;
        }

        for(int i=0;i<gas.size();i++){
            cur+=gas[i]-cost[i];
            if(cur<0){
                st=i+1;
                cur=0;
            }
        }

        return st;
    }
};
