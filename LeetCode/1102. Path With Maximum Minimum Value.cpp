class Solution {
public:
    bool vis[101][101];
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    bool valid(int x,int y,int n,int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    void dfs(int x,int y,int mid,int n,int m,vector<vector<int>>&grid){
        vis[x][y]=true;
        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(valid(xx,yy,n,m)){
                if(grid[xx][yy]>=mid && !vis[xx][yy]){
                    dfs(xx,yy,mid,n,m,grid);
                }
            }
        }
    }
    bool possible(int mid,vector<vector<int>>&grid){
        if(grid[0][0]<mid){
            return false;
        }
        memset(vis,false,sizeof(vis));
        int n=grid.size(),m=grid[0].size();
        dfs(0,0,mid,n,m,grid);
        return vis[n-1][m-1];
    }
    int maximumMinimumPath(vector<vector<int>>& grid) {
        int lo=0,hi=1e9,ans=-1;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(mid,grid)){
                lo=mid+1;
                ans=max(ans,mid);
            }
            else{
                hi=mid-1;
            }
        }
        return ans;
    }
};
