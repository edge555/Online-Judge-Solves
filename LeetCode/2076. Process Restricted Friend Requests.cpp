class Solution {
public:
    vector<int>par;
    int findpar(int n){
        return par[n]==n?n:par[n]=findpar(par[n]);
    }
    void unionn(int a,int b){
        if(a==b){
            return;
        }
        par[a]=b;
    }
    vector<bool> friendRequests(int n, vector<vector<int>>& restrictions, vector<vector<int>>& requests) {
        vector<bool>vec;

        for(int i=0;i<n;i++){
            par.push_back(i);
        }
        for(auto req:requests){
            int a=findpar(req[0]),b=findpar(req[1]);
            bool f=true;
            for(auto res:restrictions){
                int x=findpar(res[0]),y=findpar(res[1]);
                if((x==a && y==b) || (x==b && y==a)){
                    f=false;
                    break;
                }
            }
            vec.push_back(f);
            if(f){
                unionn(a,b);
            }
        }
        return vec;
    }
};
