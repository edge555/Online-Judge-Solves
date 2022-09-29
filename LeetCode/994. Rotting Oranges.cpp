class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int cnt=0,n=grid.size(),m=grid[0].size(),fresh=0;
        bool vis[n+1][m+1];
        memset(vis,false,sizeof(vis));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    vis[i][j]=true;
                    q.push({i,j});
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        if(q.empty()){
            if(fresh){
                return -1;
            }
            return 0;
        }
        while(!q.empty()){
            cnt++;
            int sz=q.size();
            while(sz--){
                pair<int,int>p=q.front();
                q.pop();
                int x=p.first,y=p.second;
                for(int i=0;i<4;i++){
                    int xx=x+dx[i];
                    int yy=y+dy[i];
                    if(xx>=0 && xx<n && yy>=0 && yy<m){
                        if(grid[xx][yy]==1 && !vis[xx][yy]){
                            q.push({xx,yy});
                            vis[xx][yy]=true;
                        }
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    return -1;
                }
            }
        }
        return cnt-1;
    }
};
