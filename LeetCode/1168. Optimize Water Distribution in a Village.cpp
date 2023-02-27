class Solution {
public:
    int par[10005];
    static bool comp(vector<int>&a,vector<int>&b){
        return a[2]<b[2];
    }
    int findpar(int n){
        return par[n]==n?n:par[n]=findpar(par[n]);
    }
    bool dsu(int u,int v){
        int paru=findpar(u);
        int parv=findpar(v);
        if(paru!=parv){
            par[paru]=par[v];
            return true;
        }
        return false;
    }
    int minCostToSupplyWater(int n, vector<int>& wells, vector<vector<int>>& pipes) {
        for(int i=0;i<wells.size();i++){
            pipes.push_back({0,i+1,wells[i]});
        }
        sort(pipes.begin(),pipes.end(),comp);
        for(int i=0;i<=n;i++){
            par[i]=i;
        }
        int cost=0;
        for(auto v:pipes){
            int a=v[0],b=v[1];
            cost+=dsu(a,b)?v[2]:0;
        }
        return cost;
    }
};
