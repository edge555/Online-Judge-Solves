class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        int n=logs.size();
        vector<int>ans(k,0);
        map<int,set<int> >mp;
        for(auto v:logs){
            mp[v[0]].insert(v[1]);
        }
        for(auto it:mp){
            ans[it.second.size()-1]++;
        }
        return ans;
    }
};
