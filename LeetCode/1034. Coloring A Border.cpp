class Solution {
public:
    bool vis[51][51];
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    bool valid(int x,int y,int n,int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    void dfs(vector<vector<int>>& grid, int n,int m,int x, int y,int curcol){
        vis[x][y]=true;
        bool f=true;
        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(valid(xx,yy,n,m)){
                if(grid[xx][yy]==curcol){
                    if(!vis[xx][yy]){
                        dfs(grid,n,m,xx,yy,curcol);
                    }
                }
                else{
                    f=false;
                }
            }
            else{
                f=false;
            }
        }
        if(!f){
            grid[x][y]=curcol;
        }
    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        int n=grid.size(),m=grid[0].size();
        dfs(grid,n,m,row,col,grid[row][col]);
        return grid;
    }
};
