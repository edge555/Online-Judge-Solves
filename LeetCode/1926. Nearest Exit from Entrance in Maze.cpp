class Solution {
public:
    int cost[101][101];
    bool vis[101][101];
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    bool valid(int x,int y,int n,int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n=maze.size(),m=maze[0].size();
        maze[entrance[0]][entrance[1]]='+';
        queue<pair<int,int>>q;
        vis[entrance[0]][entrance[1]]=true;
        cost[entrance[0]][entrance[1]]=0;
        q.push({entrance[0],entrance[1]});
        int ans=INT_MAX;
        while(!q.empty()){
            pair<int,int>p=q.front();
            q.pop();
            int x=p.first,y=p.second;
            for(int i=0;i<4;i++){
                int xx=x+dx[i];
                int yy=y+dy[i];
                if(valid(xx,yy,n,m)){
                    if(maze[xx][yy]=='.' && !vis[xx][yy]){
                        vis[xx][yy]=true;
                        cost[xx][yy]=cost[x][y]+1;
                        q.push({xx,yy});
                    }
                }
                else{
                    if(x==entrance[0] && y==entrance[1]){
                        continue;
                    }
                    ans=min(ans,cost[x][y]);
                }
            }
        }
        if(ans==INT_MAX){
            ans=-1;
        }
        return ans;
    }
};
