class Solution {
public:
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>>cost(n,vector<int>(m,1e9));
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    cost[i][j]=0;
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
                    if(mat[xx][yy]==1 && !vis[xx][yy]){
                        cost[xx][yy]=cost[x][y]+1;
                        vis[xx][yy]=true;
                        q.push({xx,yy});
                    }
                }
            }
        }
        return cost;
    }
};
