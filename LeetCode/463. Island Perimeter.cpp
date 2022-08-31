class Solution {
public:
    int dx[5]={0,0,1,-1};
    int dy[5]={1,-1,0,0};
    bool vis[101][101];
    int row,col,area = 0;
    int func(int x,int y,vector<vector<int>>& grid){
        int i,xx,yy,cnt=0;
        for(i=0;i<4;i++){
            xx = x + dx[i];
            yy = y + dy[i];
            if(xx>=0 && xx<row && yy>=0 && yy<col && grid[xx][yy]==1){
                cnt++;
            }
        }
        return 4-cnt;
    }
    bool valid(int x,int y,vector<vector<int>>& grid){
        return x>=0 && x<row && y>=0 && y<col && grid[x][y]==1 && !vis[x][y];
    }
    void dfs(int x,int y,vector<vector<int>>& grid){
        if(vis[x][y]){
            return;
        }
        vis[x][y] = true;
        area += func(x,y,grid);
        int i,xx,yy;
        for(i=0;i<4;i++){
            xx = x + dx[i];
            yy = y + dy[i];
            if(valid(xx,yy,grid)){
                dfs(xx,yy,grid);
            }
        }
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        row = grid.size();
        col = grid[0].size();
        memset(vis,false,sizeof(vis));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    dfs(i,j,grid);
                }
            }
        }
        return area;
    }
};
