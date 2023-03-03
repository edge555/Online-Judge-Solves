class Solution {
public:
    vector<int>grid[10005];
    int cost[10005];
    bool vis[10005];
    void bfs(int s){
        cost[s]=0;
        vis[s]=true;
        queue<int>q;
        q.push(s);
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(auto v:grid[u]){
                if(!vis[v]){
                    cost[v]=cost[u]+1;
                    vis[v]=true;
                    q.push(v);
                }
            }
        }
    }
    int treeDiameter(vector<vector<int>>& edges) {
        if(edges.size()==0){
            return 0;
        }
        for(auto v:edges){
            grid[v[0]].push_back(v[1]);
            grid[v[1]].push_back(v[0]);
        }
        bfs(0);
        int far=-1,dis=0;
        for(int i=0;i<edges.size()+1;i++){
            if(cost[i]>dis){
                dis=cost[i];
                far=i;
            }
        }
        memset(vis,false,sizeof(vis));
        bfs(far);
        dis=0;
        for(int i=0;i<edges.size()+1;i++){
            dis=max(dis,cost[i]);
        }
        return dis;
    }
};
