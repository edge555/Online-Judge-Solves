class Solution {
public:
    bool vis[51][51];
    int n,m;
    int dx[5]={0,0,1,-1};
    int dy[5]={1,-1,0,0};
    bool valid(int x,int y){
        return x>=0 && x<n && y>=0 && y<m;
    }
    void dfs(int x,int y,vector<vector<int>>&grid,int mid){
        vis[x][y]=true;
        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(valid(xx,yy)){
                if(!vis[xx][yy] && grid[xx][yy]<=mid){
                    dfs(xx,yy,grid,mid);
                }
            }
        }
    }
    bool possible(int mid,vector<vector<int>>&grid){
        memset(vis,false,sizeof(vis));
        if(grid[0][0]>mid){
            return false;
        }
        dfs(0,0,grid,mid);
        return vis[n-1][m-1];
    }
    int swimInWater(vector<vector<int>>& grid) {
        int lo=0,hi=2500,ans=INT_MAX;
        n=grid.size();
        m=grid[0].size();
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(mid,grid)){
                hi=mid-1;
                ans=min(ans,mid);
            }
            else{
                lo=mid+1;
            }
        }
        return ans;
    }
};
