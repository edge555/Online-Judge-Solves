class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    unordered_map<int,long long>sumColor;
    int color[301][301];
    long long total=0;
    void dfs(int x,int y,int col,int n,int m,vector<vector<int>>& grid){
        if(color[x][y]){
            return;
        }
        color[x][y]=col;
        sumColor[col]+=grid[x][y];
        total+=grid[x][y];
        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(xx>=0 && xx<n && yy>=0 && yy<m && !color[xx][yy] && grid[xx][yy]!=-1){
                dfs(xx,yy,col,n,m,grid);
            }
        }
    }
    long long sumRemoteness(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int cnt=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=-1 && !color[i][j]){
                    dfs(i,j,cnt++,n,m,grid);
                }
            }
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=-1){
                    sum+=total-sumColor[color[i][j]];
                }
            }
        }
        return sum;
    }
};
