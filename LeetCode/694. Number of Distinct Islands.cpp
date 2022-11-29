class Solution {
public:
    set<vector<pair<int,int>>>st;
    bool vis[51][51];
    vector<pair<int,int>>vec;
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    int mn=1e9,mn2=1e9;
    bool valid(int x,int y,int n,int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    void dfs(int x,int y,int n,int m,vector<vector<int>>&grid){
        vec.push_back({x,y});
        mn=min(mn,x);
        mn2=min(mn2,y);
        vis[x][y]=true;
        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(valid(xx,yy,n,m)){
                if(grid[xx][yy]==1 && !vis[xx][yy]){
                    dfs(xx,yy,n,m,grid);
                }
            }
        }
    }
    int numDistinctIslands(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    vec.clear();
                    mn=1e9;
                    mn2=1e9;
                    dfs(i,j,n,m,grid);
                    for(int k=0;k<vec.size();k++){
                        vec[k].first-=mn;
                        vec[k].second-=mn2;
                    }
                    sort(vec.begin(),vec.end());
                    st.insert(vec);
                }
            }
        }
        return st.size();
    }
};
