class Solution {
public:
    vector<pair<int,int>>grid[501];
    int dis[501];
    int minimumDistance(int n, vector<vector<int>>& edges, int s, vector<int>& marked) {
        for(int i=0;i<501;i++){
            dis[i]=2e9;
        }
        for(auto e:edges){
            grid[e[0]].push_back({e[1],e[2]});
        }
        unordered_set<int>markedNode;
        for(auto v:marked){
            markedNode.insert(v);
        }
        priority_queue<pair<int,int>>pq;
        pq.push({0,s});
        dis[s]=0;
        int ans=2e9;
        while(!pq.empty()){
            auto p=pq.top();
            pq.pop();
            int w=p.first,u=p.second;
            if(markedNode.find(u)!=markedNode.end()){
                ans=min(ans,w);
            }
            for(auto e:grid[u]){
                int v=e.first,c=e.second;
                if(dis[v]>w+c){
                    dis[v]=w+c;
                    pq.push({dis[v],v});
                }
            }
        }
        if(ans==2e9){
            ans=-1;
        }
        return ans;
    }
};
