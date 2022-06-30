class Solution {
public:
    vector<pair<int,int>>grid[105];
    int dis[105];
    int dijkstra(int st,int n){
        for(int i=0;i<n;i++){
            dis[i]=INT_MAX;
        }
        dis[st]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> >pq;
        pq.push({0,st});
        while(!pq.empty()){
            pair<int,int>p = pq.top();
            pq.pop();
            int u=p.second,w=p.first;
            if(dis[u]<w){
                continue;
            }
            for(auto pp:grid[u]){
                int v=pp.first,c=pp.second;
                if(dis[u]+c<dis[v]){
                    dis[v]=dis[u]+c;
                    pq.push({dis[v],v});
                }
            }
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            ans=max(ans,dis[i]);
        }
        if(ans==INT_MAX){
            ans=-1;
        }
        return ans;
    }
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        for(auto v:times){
            grid[v[0]-1].push_back({v[1]-1,v[2]});
        }
        return dijkstra(k-1,n);
    }
};
