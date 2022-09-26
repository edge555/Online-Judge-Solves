class Solution {
public:
    int par[27],rnk[27];
    void pre(){
        for(int i=0;i<26;i++){
            par[i]=i;
            rnk[i]=1;
        }
    }
    static bool comp(string &a,string &b){
        if(a[1]==b[1]){
            return a[0]<b[0];
        }
        return a[1]>b[1];
    }
    int findpar(int n){
        return par[n]==n?n:par[n]=findpar(par[n]);
    }
    void dsu(int u,int v){
        int paru=findpar(u);
        int parv=findpar(v);
        if(paru!=parv){
            if(rnk[paru]>rnk[parv]){
                par[parv]=paru;
                rnk[paru]+=rnk[parv];
            }
            else{
                par[paru]=parv;
                rnk[parv]+=rnk[paru];
            }
        }
    }
    bool equationsPossible(vector<string>& equations) {
        pre();
        sort(equations.begin(),equations.end(),comp);
        int i=0;
        for(i=0;i<equations.size();i++){
            string s=equations[i];
            int x=s[0]-'a',y=s[3]-'a';
            if(s[1]=='!'){
                break;
            }
            dsu(x,y);
        }
        while(i<equations.size()){
            string s=equations[i];
            int x=s[0]-'a',y=s[3]-'a';
            int parx=findpar(x);
            int pary=findpar(y);
            if(parx==pary){
                return false;
            }
            i++;
        }
        return true;
    }
};
