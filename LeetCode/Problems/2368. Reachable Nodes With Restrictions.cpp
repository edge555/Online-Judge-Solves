class Solution {
public:
    vector<int>grid[100005];
    bool vis[100005];
    unordered_set<int>res;
    void dfs(int u){
        vis[u]=true;
        for(auto v:grid[u]){
            if(!vis[v] && res.find(v)==res.end()){
                dfs(v);
            }
        }
    }
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        for(auto v:edges){
            grid[v[0]].push_back(v[1]);
            grid[v[1]].push_back(v[0]);
        }
        for(auto x:restricted){
            res.insert(x);
        }
        dfs(0);
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=vis[i];
        }
        return cnt;
    }
};
