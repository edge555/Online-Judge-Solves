class Solution {
public:
    bool vis[301][301];
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    bool valid(int x,int y,int n,int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    void dfs(int x,int y,int n,int m,int color,vector<vector<int>>& land){
        if(vis[x][y]){
            return;
        }
        vis[x][y]=true;
        land[x][y]=color;
        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(valid(xx,yy,n,m)){
                if(!vis[xx][yy] && land[xx][yy]==1){
                    dfs(xx,yy,n,m,color,land);
                }
            }
        }
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int n=land.size(),m=land[0].size();
        memset(vis,false,sizeof(vis));
        int color=2;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && land[i][j]==1){
                    dfs(i,j,n,m,color,land);
                    color++;
                }
            }
        }
        unordered_map<int,vector<pair<int,int>> >mp;
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(land[i][j]>=2){
                    mp[land[i][j]].push_back({i,j});
                }
            }
        }
        for(auto it:mp){
            vector<int>temp;
            temp.push_back(it.second[0].first);
            temp.push_back(it.second[0].second);
            temp.push_back(it.second[it.second.size()-1].first);
            temp.push_back(it.second[it.second.size()-1].second);
            ans.push_back(temp);
        }
        return ans;
    }
};
