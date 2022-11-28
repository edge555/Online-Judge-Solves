class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) {
        map<int,vector<int>>mp;
        for(auto v:items){
            mp[v[0]].push_back(v[1]);
        }
        for(auto v:mp){
            sort(mp[v.first].begin(),mp[v.first].end(),greater<int>());
        }
        vector<vector<int>>ans;
        for(auto v:mp){
            int sum=0;
            for(int i=0;i<5;i++){
                sum+=v.second[i];
            }
            ans.push_back({v.first,sum/5});
        }
        return ans;
    }
};
