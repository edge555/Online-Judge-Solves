class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    int n,m,cnt=0;
    vector<int>vec;
    int vis[501][501],vis2[501][501];
    int color[501][501];
    bool valid(int x,int y){
        return x>=0 && x<n && y>=0 && y<m && !vis[x][y];
    }
    bool valid2(int x,int y){
        return x>=0 && x<n && y>=0 && y<m && !vis2[x][y];
    }
    void dfs(int x,int y,int col,vector<vector<int>>& grid1){
        vis[x][y]=true;
        color[x][y]=col;
        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(valid(xx,yy)){
                if(grid1[xx][yy]==1){
                    dfs(xx,yy,col,grid1);
                }
            }
        }
    }
    void dfs2(int x,int y,int col,vector<vector<int>>& grid2){
        vec.push_back(col);
        vis2[x][y]=true;
        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(valid2(xx,yy)){
                if(grid2[xx][yy]==1){
                    dfs2(xx,yy,color[xx][yy],grid2);
                }
            }
        }
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        memset(vis,false,sizeof(vis));
        memset(vis2,false,sizeof(vis2));
        memset(color,-1,sizeof(color));
        n=grid1.size();
        m=grid1[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid1[i][j]==1 && !vis[i][j]){
                    dfs(i,j,cnt,grid1);
                    cnt++;
                }
            }
        }
        cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid2[i][j]==1 && !vis2[i][j] && vis[i][j]){
                    vec.clear();
                    dfs2(i,j,color[i][j],grid2);
                    bool f=true;
                    for(int i=1;i<vec.size();i++){
                        if(vec[i]!=vec[i-1]){
                            f=false;
                            break;
                        }
                    }
                    cnt+=f;
                }
            }
        }
        return cnt;
    }
};
