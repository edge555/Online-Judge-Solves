class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    int n,m;
    bool vis[301][301];

    bool valid(int x,int y){
        return x>=0 && x<n && y>=0 && y<m && !vis[x][y];
    }
    void dfs(int x,int y,vector<vector<char>>& grid){
        vis[x][y]=true;
        int i,xx,yy;
        for(i=0;i<4;i++)
        {
            xx=x+dx[i];
            yy=y+dy[i];
            if(valid(xx,yy) && grid[xx][yy]=='1')
            {
                dfs(xx,yy,grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        n=grid.size();
        m=grid[0].size();
        memset(vis,false,sizeof(vis));
        int i,j,ans=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {

                if(!vis[i][j] && grid[i][j]=='1')
                {
                    ans++;
                    dfs(i,j,grid);
                }
            }
        }
        return ans;
    }
};
