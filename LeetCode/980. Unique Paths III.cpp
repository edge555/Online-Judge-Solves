class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    int n,m,cnt,ex,ey;
    set<vector<int>>st;
    void dfs(int x,int y,vector<vector<int>> grid,vector<int>path){
        path.push_back(n*x+y);
        grid[x][y]=-1;
        if(x==ex && y==ey && path.size()==cnt){
            st.insert(path);
            return;
        }
        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(xx>=0 && xx<n && yy>=0 && yy<m){
                if(grid[xx][yy]!=-1){
                    dfs(xx,yy,grid,path);
                }
            }
        }
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int sx=-1,sy=-1;
        n=grid.size();
        m=grid[0].size();
        cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=-1){
                    cnt++;
                }
                if(grid[i][j]==1){
                    sx=i;
                    sy=j;
                }
                else if(grid[i][j]==2){
                    ex=i;
                    ey=j;
                }
            }
        }
        dfs(sx,sy,grid,{});
        return st.size();
    }
};
