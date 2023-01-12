class Solution {
public:
    bool vis[201][201];
    int cost[201][201];
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    bool valid(int x,int y,int n,int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    int getFood(vector<vector<char>>& grid) {
        int sx=-1,sy=-1;
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='*'){
                    sx=i;
                    sy=j;
                }
            }
        }
        queue<pair<int,int>>q;
        q.push({sx,sy});
        vis[sx][sy]=true;
        cost[sx][sy]=0;
        while(!q.empty()){
            pair<int,int>p=q.front();
            q.pop();
            int x=p.first,y=p.second;
            for(int i=0;i<4;i++){
                int xx=x+dx[i];
                int yy=y+dy[i];
                if(valid(xx,yy,n,m)){
                    if(grid[xx][yy]=='#'){
                        return cost[x][y]+1;
                    }
                    else if(grid[xx][yy]=='O' && !vis[xx][yy]){
                        vis[xx][yy]=true;
                        cost[xx][yy]=cost[x][y]+1;
                        q.push({xx,yy});
                    }
                }
            }
        }
        return -1;
    }
};
