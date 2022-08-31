class Solution {
public:
    bool vis[10005];
    bool safe[10005];
    bool dfs(int u,vector<vector<int>>&grid){
        if(safe[u]){
            return true;
        }
        if(vis[u]){
            return false;
        }
        vis[u]=true;
        for(auto v:grid[u]){
            if(!dfs(v,grid)){
                return false;
            }
        }
        return safe[u]=true;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        memset(vis,false,sizeof(vis));
        memset(safe,false,sizeof(safe));
        int n=graph.size();
        for(int i=0;i<n;i++){
            dfs(i,graph);
        }
        vector<int>vec;
        for(int i=0;i<n;i++){
            if(safe[i]){
                vec.push_back(i);
            }
        }
        return vec;
    }
};
