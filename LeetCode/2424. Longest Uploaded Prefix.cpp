class LUPrefix {
public:
    int par[100005],cnt[100005];
    unordered_map<int,int>mp;
    void pre(int n){
        for(int i=0;i<=n;i++){
            par[i]=i;
            cnt[i]=1;
        }
    }
    int findpar(int n){
        return par[n]==n?n:par[n]=findpar(par[n]);
    }

    void dsu(int x,int y){
        if(cnt[x]>cnt[y]){
            par[y]=x;
            cnt[x]+=cnt[y];
            cnt[y]=0;
        }
        else{
            par[x]=y;
            cnt[y]+=cnt[x];
            cnt[x]=0;
        }
    }

    LUPrefix(int n) {
        pre(n);
    }

    void upload(int video) {
        if(mp[video]>0){
            return;
        }
        if(mp[video-1]>0 && mp[video+1]>0){
            int u=findpar(video-1);
            int v=video;
            if(u!=v){
                dsu(u,v);
            }
            u=findpar(video+1);
            v=findpar(video);
            if(u!=v){
                dsu(u,v);
            }
        }
        else if(mp[video-1]>0){
            int u=findpar(video-1);
            int v=video;
            if(u!=v){
                dsu(u,v);
            }
        }
        else if(mp[video+1]>0){
            int u=findpar(video+1);
            int v=video;
            if(u!=v){
                dsu(u,v);
            }
        }
        mp[video]++;
    }

    int longest() {
        if(mp[1]==0){
            return 0;
        }
        int r=cnt[findpar(1)];
        return r;
    }
};
