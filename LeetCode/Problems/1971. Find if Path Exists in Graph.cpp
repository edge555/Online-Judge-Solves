class Solution {
public:
    bool vis[200005];
    vector<int>grid[200005];
    void dfs(int u){
        vis[u]=true;
        for(auto v:grid[u]){
            if(!vis[v]){
                dfs(v);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        memset(vis,false,sizeof(vis));
        for(auto v:edges){
            grid[v[0]].push_back(v[1]);
            grid[v[1]].push_back(v[0]);
        }
        dfs(source);
        return vis[destination];
    }
};
