class Solution {
public:
    vector<int>dx={0,0,1,-1};
    vector<int>dy={1,-1,0,0};
    struct node{
        int x,y,d;
    };
    bool valid(int x,int y,int n,int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    int shortestPath(vector<vector<int>>& grid, int k) {
        int n=grid.size(),m=grid[0].size();
        int cost[n+1][m+1];
        bool vis[n+1][m+1][k+1];
        memset(vis,false,sizeof(vis));
        queue<node>q;
        q.push({0,0,k});
        vis[0][0][k]=true;
        cost[0][0]=0;
        while(!q.empty()){
            node nn=q.front();
            q.pop();
            int x=nn.x,y=nn.y,d=nn.d;
            if(x==n-1 && y==m-1){
                return cost[x][y];
            }
            for(int i=0;i<4;i++){
                int xx=x+dx[i];
                int yy=y+dy[i];
                if(valid(xx,yy,n,m)){
                    if(grid[xx][yy]==1){
                        if(d>0){
                            if(vis[xx][yy][d-1]==false){
                                vis[xx][yy][d-1]=true;
                                cost[xx][yy]=cost[x][y]+1;
                                q.push({xx,yy,d-1});
                            }
                        }
                    }
                    else{
                        if(vis[xx][yy][d]==false){
                            vis[xx][yy][d]=true;
                            cost[xx][yy]=cost[x][y]+1;
                            q.push({xx,yy,d});
                        }
                    }
                }
            }
        }
        return -1;
    }
};
