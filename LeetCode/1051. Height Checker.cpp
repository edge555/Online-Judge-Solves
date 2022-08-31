class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>vec=heights;
        sort(vec.begin(),vec.end());
        int cnt=0;
        for(int i=0;i<heights.size();i++){
            cnt+=heights[i]!=vec[i];
        }
        return cnt;
    }
};
