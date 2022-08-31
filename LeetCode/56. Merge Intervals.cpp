class Solution {
public:
    bool overlap(vector<int>&vec,vector<int>&vec2){
        int a=vec[0],b=vec[1];
        int x=vec2[0],y=vec2[1];
        if(b>=x && y>=b){
            return true;
        }
        return false;
    }
    bool inside(vector<int>&vec,vector<int>&vec2){
        int a=vec[0],b=vec[1];
        int x=vec2[0],y=vec2[1];
        if(x>=a && y<=b){
            return true;
        }
        return false;
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>vec;
        int st=-1,en;
        for(int i=0;i<intervals.size();i++){
            if(st==-1){
                st=i;
                en=i;
            }
            else{
                if(inside(intervals[en],intervals[i])){
                    continue;
                }
                if(overlap(intervals[en],intervals[i])){
                    en=i;
                }
                else{
                    vec.push_back({intervals[st][0],max(intervals[en][1],intervals[st][1])});
                    st=i;
                    en=i;
                }
            }
        }
        vec.push_back({intervals[st][0],max(intervals[en][1],intervals[st][1])});
        return vec;
    }
};
