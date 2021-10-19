class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int cnt=0;
        for(int i=0;i<startTime.size();i++){
            cnt+=queryTime>=startTime[i] && queryTime<=endTime[i];
        }
        return cnt;
    }
};
