class Solution {
public:
    int par[1005];
    int rnk[1005];
    int n;
    pair<int,int>ans;
    void init(){
        for(int i=0;i<n;i++){
            par[i]=i;
            rnk[i]=0;
        }
    }
    int findpar(int n){
        return par[n]==n?n:par[n]=findpar(par[n]);
    }
    void dsu(int x,int y){
        int px=findpar(x);
        int py=findpar(y);
        if(px==py){
            ans={x,y};
        }
        else{
            if(rnk[px]>rnk[py]){
                par[py]=px;
            }
            else{
                par[px]=py;
                if(rnk[px]==rnk[py]){
                    rnk[py]++;
                }
            }
        }
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        n=edges.size();
        init();
        for(auto v:edges){
            int x=v[0],y=v[1];
            dsu(x,y);
        }
        return {ans.first,ans.second};
    }
};
