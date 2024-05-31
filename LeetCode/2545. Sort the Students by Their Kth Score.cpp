class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<pair<int,int>>vec;
        for(int i=0;i<score.size();i++){
            vec.push_back({score[i][k],i});
        }
        sort(vec.begin(),vec.end(),greater<pair<int,int>>());
        vector<vector<int>>ans;
        for(auto p:vec){
            ans.push_back(score[p.second]);
        }
        return ans;
    }
};
