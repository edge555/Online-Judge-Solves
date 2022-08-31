class Solution {
public:
    vector<int>grid[100005];
    bool vis[100005];
    void dfs(int u){
        vis[u]=true;
        for(auto v:grid[u]){
            if(!vis[v]){
                dfs(v);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        memset(vis,false,sizeof(vis));
        for(auto v:connections){
            grid[v[0]].push_back(v[1]);
            grid[v[1]].push_back(v[0]);
        }
        if(connections.size()<n-1){
            return -1;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                ans++;
                dfs(i);
            }
        }
        return ans-1;
    }
};
