class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    int cnt=0;
    bool f=true;
    bool vis[501][501];
    bool valid(int x,int y,int &n,int &m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    void dfs(int x,int y,int &n,int &m,vector<vector<int>>& grid){
        vis[x][y]=true;
        cnt++;
        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(valid(xx,yy,n,m)){
                if(grid[xx][yy]==1 && !vis[xx][yy]){
                    dfs(xx,yy,n,m,grid);
                }
            }
            else{
                f=false;
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(),ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]){
                    cnt=0;
                    f=true;
                    dfs(i,j,n,m,grid);
                    if(f){
                        ans+=cnt;
                    }
                }
            }
        }
        return ans;
    }
};
