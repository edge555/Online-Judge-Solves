class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    bool vis[201][201][3];
    bool valid(int x,int y,int n,int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    void bfs(vector<vector<int>>& grid,int &n,int &m,int f){
        queue<pair<pair<int,int>,int>>q;
        if(!f){
            for(int i=0;i<n;i++){
                q.push({{i,m-1},grid[i][m-1]});
                vis[i][m-1][f]=true;
            }
            for(int i=0;i<m-1;i++){
                q.push({{n-1,i},grid[n-1][i]});
                vis[n-1][i][f]=true;
            }
        }
        else{
            for(int i=0;i<m;i++){
                q.push({{0,i},grid[0][i]});
                vis[0][i][f]=true;
            }
            for(int i=1;i<n;i++){
                q.push({{i,0},grid[i][0]});
                vis[i][0][f]=true;
            }
        }
        while(!q.empty()){
            pair<pair<int,int>,int>pp=q.front();
            q.pop();
            pair<int,int>p=pp.first;
            int c=pp.second;
            int x=p.first,y=p.second;
            for(int i=0;i<4;i++){
                int xx=x+dx[i];
                int yy=y+dy[i];
                if(valid(xx,yy,n,m)){
                    if(grid[xx][yy]>=c && !vis[xx][yy][f]){
                        vis[xx][yy][f]=true;
                        q.push({{xx,yy},grid[xx][yy]});
                    }
                }
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n=heights.size(),m=heights[0].size();
        bfs(heights,n,m,0);
        bfs(heights,n,m,1);
        vector<vector<int>>vec;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j][0] && vis[i][j][1]){
                    vec.push_back({i,j});
                }
            }
        }
        return vec;
    }
};
