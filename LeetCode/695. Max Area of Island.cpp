class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    int n,m,cnt=0;
    bool vis[51][51];
    bool valid(int x,int y){
        return x>=0 && x<n && y>=0 && y<m && !vis[x][y];
    }
    void dfs(int x,int y,vector<vector<int>>& grid){
        vis[x][y]=true;
        cnt++;
        int i,xx,yy;
        for(i=0;i<4;i++)
        {
            xx=x+dx[i];
            yy=y+dy[i];
            if(valid(xx,yy) && grid[xx][yy]==1)
            {
                dfs(xx,yy,grid);
            }
        }
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        memset(vis,false,sizeof(vis));
        int i,j,ans=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cnt=0;
                if(!vis[i][j] && grid[i][j]==1)
                {
                    dfs(i,j,grid);
                }
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};
