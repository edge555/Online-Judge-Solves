class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    bool vis[101][101];
    bool f;
    int n,m;
    bool valid(int x,int y){
        return x>=0 && x<n && y>=0 && y<m;
    }
    void dfs(int x,int y,vector<vector<int>>& grid){
        vis[x][y]=true;
        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(valid(xx,yy)){
                if(grid[xx][yy]==0  && !vis[xx][yy]){
                    dfs(xx,yy,grid);
                }
            }
            else{
                f=true;
            }
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        memset(vis,false,sizeof(vis));
        int cnt=0;
        n=grid.size();
        m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0 && !vis[i][j]){
                    f=false;
                    dfs(i,j,grid);
                    cnt+=!f;
                }
            }
        }
        return cnt;
    }
};
