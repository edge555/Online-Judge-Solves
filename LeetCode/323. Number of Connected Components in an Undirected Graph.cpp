class Solution {
public:
    bool vis[2005];
    vector<int>grid[2005];
    void dfs(int u){
        vis[u]=true;
        for(auto v:grid[u]){
            if(!vis[v]){
                dfs(v);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        for(auto v:edges){
            grid[v[0]].push_back(v[1]);
            grid[v[1]].push_back(v[0]);
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                cnt++;
                dfs(i);
            }
        }
        return cnt;
    }
};
