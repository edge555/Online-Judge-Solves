class Solution {
public:
    int dis[101][101];
    void reset(int n){
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                dis[i][j]=1e9;
            }
        }
    }
    void floydwarshall(int n){
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(dis[i][j]>dis[i][k]+dis[k][j]){
                        dis[i][j]=dis[i][k]+dis[k][j];
                    }
                }
            }
        }
    }
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        reset(n);
        for(auto vec:edges){
            int u=vec[0],v=vec[1],c=vec[2];
            dis[u][v]=c;
            dis[v][u]=c;
        }
        floydwarshall(n);
        int mn=INT_MAX,ans=-1;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                if(dis[i][j]<=distanceThreshold){
                    cnt++;
                }
            }
            if(cnt<mn){
                mn=cnt;
                ans=i;
            }
            else if(cnt==mn){
                ans=i;
            }
        }
        return ans;
    }
};
