class Solution {
public:
    struct edge{
        int u,v,w;
    };
    vector<edge>vec;
    vector<int>grid[10005];
    bool vis[10005];
    int par[10005];
    static bool comp(edge &a,edge &b){
        return a.w<b.w;
    }
    void dfs(int u){
        vis[u]=true;
        for(auto v:grid[u]){
            if(!vis[v]){
                dfs(v);
            }
        }
    }
    int findpar(int n){
        return par[n]==n?n:par[n]=findpar(par[n]);
    }
    int mst(int n){
        sort(vec.begin(),vec.end(),comp);
        for(int i=1;i<=n;i++){
            par[i]=i;
        }
        int sum=0,cnt=0;
        for(auto e:vec){
            int u=findpar(e.u);
            int v=findpar(e.v);
            if(u!=v){
                par[u]=v;
                sum+=e.w;
                cnt++;
            }
            if(cnt==n-1){
                break;
            }
        }
        return sum;
    }
    int minimumCost(int n, vector<vector<int>>& connections) {
        for(auto v:connections){
            grid[v[0]].push_back(v[1]);
            grid[v[1]].push_back(v[0]);
            vec.push_back({v[0],v[1],v[2]});
        }
        dfs(1);
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                return -1;
            }
        }
        return mst(n);
    }
};
