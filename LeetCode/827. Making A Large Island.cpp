class Solution {
public:
    bool vis[501][501];
    int ara[501][501],col[501][501],cnt,ans=0;
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    vector<pair<int,int>>vec;
    bool valid(int x,int y,int n){
        return x>=0 && x<n && y>=0 && y<n;
    }
    void dfs(int x,int y,int n,vector<vector<int>>& grid){
        cnt++;
        vec.push_back({x,y});
        vis[x][y]=true;
        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(valid(xx,yy,n)){
                if(grid[xx][yy]==1 && !vis[xx][yy]){
                    dfs(xx,yy,n,grid);
                }
            }
        }
    }
    int largestIsland(vector<vector<int>>& grid) {
        int n=grid.size(),c=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    cnt=0;
                    vec.clear();
                    dfs(i,j,n,grid);
                    for(auto p:vec){
                        int x=p.first,y=p.second;
                        ara[x][y]=cnt;
                        col[x][y]=c;
                    }
                    ans=max(ans,cnt);
                    c++;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    unordered_map<int,int>mp;
                    int temp=0;
                    for(int p=0;p<4;p++){
                        int ii=i+dx[p];
                        int jj=j+dy[p];
                        if(valid(ii,jj,n)){
                            int cc=col[ii][jj];
                            if(mp.find(cc)==mp.end()){
                                temp+=ara[ii][jj];
                                mp[cc]++;
                            }
                        }
                    }
                    ans=max(ans,temp+1);
                }
            }
        }
        return ans;
    }
};
