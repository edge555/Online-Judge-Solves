class Solution {
public:
    vector<int>dx={0,0,1,-1};
    vector<int>dy={1,-1,0,0};
    bool vis[101][101];
    bool valid(int x,int y,int n,int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    bool possible(int mid,vector<vector<int>>& grid){
        memset(vis,0,sizeof(vis));
        queue<pair<int,pair<int,int>>>q;
        q.push({grid[0][0],{0,0}});
        vis[0][0]=true;
        while(!q.empty()){
            pair<int,pair<int,int>>p=q.front();
            int prev=p.first;
            int x=p.second.first;
            int y=p.second.second;
            q.pop();
            for(int i=0;i<4;i++){
                int xx=x+dx[i];
                int yy=y+dy[i];
                if(valid(xx,yy,grid.size(),grid[0].size())){
                    if(abs(prev-grid[xx][yy])<=mid && !vis[xx][yy]){
                        vis[xx][yy]=true;
                        q.push({grid[xx][yy],{xx,yy}});
                    }
                }
            }
        }
        return vis[grid.size()-1][grid[0].size()-1];
    }
    int minimumEffortPath(vector<vector<int>>& heights) {
        int lo=0,hi=1000005,ans=INT_MAX;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(mid,heights)){
                ans=min(ans,mid);
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return ans;
    }
};
