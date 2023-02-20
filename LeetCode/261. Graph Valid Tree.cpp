class Solution {
public:
    bool vis[2001];
    vector<int>grid[2001];
    int indeg[2001];
    bool validTree(int n, vector<vector<int>>& edges) {
        for(auto v:edges){
            grid[v[0]].push_back(v[1]);
            grid[v[1]].push_back(v[0]);
        }
        queue<pair<int,int>>q;
        q.push({0,-1});
        vis[0]=true;
        while(!q.empty()){
            pair<int,int>p = q.front();
            int u=p.first;
            q.pop();
            for(auto v:grid[u]){
                if(v==p.second){
                    continue;
                }
                if(!vis[v]){
                    vis[v]=true;
                    q.push({v,u});
                }
                else{
                    return false;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[i]){
                return false;
            }
        }
        return true;
    }
};
