class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    void bfs(vector<vector<int>>& rooms){
        int n=rooms.size(),m=rooms[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(rooms[i][j]==0){
                    q.push({i,j});
                    vis[i][j]=true;
                }
            }
        }
        while(!q.empty()){
            pair<int,int>p=q.front();
            q.pop();
            int x=p.first,y=p.second;
            for(int i=0;i<4;i++){
                int xx=x+dx[i];
                int yy=y+dy[i];
                if(xx>=0 && xx<n && yy>=0 && yy<m){
                    if(rooms[xx][yy]>0 && !vis[xx][yy]){
                        rooms[xx][yy]=rooms[x][y]+1;
                        vis[xx][yy]=true;
                        q.push({xx,yy});
                    }
                }
            }
        }
    }
    void wallsAndGates(vector<vector<int>>& rooms) {
        bfs(rooms);
    }
};
