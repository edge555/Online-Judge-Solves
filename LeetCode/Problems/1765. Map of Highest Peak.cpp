class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    bool valid(int x,int y,int n,int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int n=isWater.size(),m=isWater[0].size();
        bool vis[n+1][m+1];
        memset(vis,false,sizeof(vis));
        vector<vector<int>>vec(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isWater[i][j]==1){
                    q.push({i,j});
                    vis[i][j]=true;
                    vec[i][j]=0;
                }
            }
        }
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            int x=p.first,y=p.second;
            for(int i=0;i<4;i++){
                int xx=x+dx[i];
                int yy=y+dy[i];
                if(valid(xx,yy,n,m)){
                    if(!vis[xx][yy]){
                        vis[xx][yy]=true;
                        vec[xx][yy]=vec[x][y]+1;
                        q.push({xx,yy});
                    }
                }
            }
        }
        return vec;
    }
};
