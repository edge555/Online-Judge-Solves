class Solution {
public:
    int imp[2005];
    vector<int>grid[2005];
    int emp[2005];
    bool vis[2005];
    int ans=0;
    void dfs(int u){
        vis[u]=true;
        ans+=imp[u];
        for(auto v:grid[u]){
            if(!vis[v]){
                dfs(v);
            }
        }
    }
    int getImportance(vector<Employee*> employees, int id) {
        memset(emp,0,sizeof(emp));
        memset(vis,false,sizeof(vis));
        for(auto e:employees){
            emp[e->id]=1;
            imp[e->id]=e->importance;
            for(auto x:e->subordinates){
                grid[e->id].push_back(x);
            }
        }
        dfs(id);
        return ans;
    }
};
