class Solution {
public:
    static bool comp(vector<int>&vec,vector<int>&vec2){
        if(vec[0]==vec2[0]){
            return vec[1]>vec2[1];
        }
        return vec[0]<vec2[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        int cnt=0,end=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][1]<=end){
                cnt++;
            }
            else{
                end=intervals[i][1];
            }
        }
        return intervals.size()-cnt;
    }
};
