class Solution {
public:
    int ara[105][105];
    bool vis[105][105];
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    bool valid(int x,int y,int n){
        return x>=0 && x<n && y>=0 && y<n;
    }
    void dfs(int i,int j,int n,int col,vector<vector<int>>& grid){
        ara[i][j]=col;
        vis[i][j]=true;
        for(int k=0;k<4;k++){
            int x=i+dx[k];
            int y=j+dy[k];
            if(valid(x,y,n)){
                if(grid[x][y]==1 && !vis[x][y]){
                    dfs(x,y,n,col,grid);
                }
            }

        }
    }
    int calcManhattan(pair<int,int>p,pair<int,int>p2){
        return abs(p.first-p2.first)+abs(p.second-p2.second);
    }
    int shortestBridge(vector<vector<int>>& grid) {
        int n=grid.size();
        memset(ara,-1,sizeof(ara));
        for(int i=0;i<n;i++){
            bool f=true;
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    dfs(i,j,n,1,grid);
                    f=false;
                    break;
                }
            }
            if(!f){
                break;
            }
        }
        for(int i=0;i<n;i++){
            bool f=true;
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    dfs(i,j,n,2,grid);
                    f=false;
                    break;
                }
            }
            if(!f){
                break;
            }
        }
        vector<pair<int,int>>vec,vec2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(ara[i][j]==1){
                    vec.push_back({i,j});
                }
                else if(ara[i][j]==2){
                    vec2.push_back({i,j});
                }
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<vec.size();i++){
            for(int j=0;j<vec2.size();j++){
                ans=min(ans,calcManhattan(vec[i],vec2[j]));
            }
        }
        return ans-1;
    }
};
