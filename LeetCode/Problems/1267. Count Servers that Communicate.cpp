class Solution {
public:
    bool vis[251][251];
    int ara[251][251];
    int n,m;
    void dfs(int x,int y,int col,vector<vector<int>>&grid){
        vis[x][y]=true;
        ara[x][y]=col;
        int xx=x,yy=y;
        for(int i=0;i<m;i++){
            if(grid[x][i]==1 && !vis[x][i]){
                dfs(x,i,col,grid);
            }
        }
        for(int i=0;i<n;i++){
            if(grid[i][y]==1 && !vis[i][y]){
                dfs(i,y,col,grid);
            }
        }
    }
    int countServers(vector<vector<int>>& grid) {
        memset(vis,false,sizeof(vis));
        memset(ara,-1,sizeof(ara));
        int color=0;
        n=grid.size();
        m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    dfs(i,j,color,grid);
                    color++;
                }
            }
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mp[ara[i][j]]++;
            }
        }
        int cnt=0;
        for(auto it:mp){
            if(it.second>1 && it.first!=-1){
                cnt+=it.second;
            }
        }
        return cnt;
    }
};
