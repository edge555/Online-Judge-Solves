class Solution {
public:
    int dis[101];
    vector<pair<int,int>>grid[101];
    int dijkstra(int n, vector<vector<int>>& flights, int st, int en, int k){
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        pq.push({0,{st,0}});
        while(!pq.empty()){
            pair<int,pair<int,int>>pp=pq.top();
            pq.pop();
            int d=pp.first;
            int u=pp.second.first;
            int stop=pp.second.second;
            dis[u]=stop;
            if(u==en){
                return d;
            }
            for(auto p:grid[u]){
                int v=p.first;
                int w=p.second;
                if(stop<k+1 && dis[v]>stop){
                    pq.push({d+w,{v,stop+1}});
                }
            }
        }
        return -1;
    }
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        for(auto v:flights){
            grid[v[0]].push_back({v[1],v[2]});
        }
        for(int i=0;i<101;i++){
            dis[i]=INT_MAX;
        }
        return dijkstra(n,flights,src,dst,k);
    }
};
