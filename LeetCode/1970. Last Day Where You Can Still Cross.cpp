class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    bool valid(int x,int y,int n,int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    bool possible(int mid,int n,int m,vector<vector<int>>& grid){
        bool vis[n+5][m+5];
        memset(vis,false,sizeof(vis));
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            if(grid[0][i]>mid){
                q.push({0,i});
                vis[0][i]=true;
            }
        }
        while(!q.empty()){
            pair<int,int>p=q.front();
            q.pop();
            int x=p.first,y=p.second;
            if(x==n-1){
                return true;
            }
            for(int i=0;i<4;i++){
                int xx=x+dx[i];
                int yy=y+dy[i];
                if(valid(xx,yy,n,m)){
                    if(vis[xx][yy]){
                        continue;
                    }
                    if(grid[xx][yy]==0 || grid[xx][yy]>mid){
                        vis[xx][yy]=true;
                        q.push({xx,yy});
                        if(xx==n-1){
                            return true;
                        }
                    }
                }
            }
        }
        return false;
    }
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        vector<vector<int>>grid(row+1,vector<int>(col+1));
        for(int i=0;i<cells.size();i++){
            grid[cells[i][0]-1][cells[i][1]-1]=i+1;
        }
        int lo=1,hi=cells.size(),ans=0;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(mid,row,col,grid)){
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
