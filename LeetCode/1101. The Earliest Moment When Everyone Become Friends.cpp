class Solution {
public:
    int par[101],rnk[101];
    void init(){
        for(int i=0;i<101;i++){
            par[i]=i;
            rnk[i]=1;
        }
    }
    int findpar(int n){
        return par[n]==n?n:par[n]=findpar(par[n]);
    }
    void dsu(int u,int v){
        if(rnk[u]>rnk[v]){
            par[v]=u;
            rnk[u]+=rnk[v];
        }
        else{
            par[u]=v;
            rnk[v]+=rnk[u];
        }
    }
    bool check(int n){
        int p=findpar(0);
        for(int i=1;i<n;i++){
            if(findpar(i)!=p){
                return false;
            }
        }
        return true;
    }
    int earliestAcq(vector<vector<int>>& logs, int n) {
        init();
        sort(logs.begin(),logs.end());
        for(auto p:logs){
            int u=p[1],v=p[2];
            int pu=findpar(u),pv=findpar(v);
            if(pu!=pv){
                dsu(pu,pv);
            }
            if(check(n)){
                return p[0];
            }
        }
        return -1;
    }
};
