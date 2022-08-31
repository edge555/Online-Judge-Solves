class Solution {
public:
    bool vis[201];
    void dfs(int u,int n,vector<vector<int>>& grid){
        vis[u]=true;
        for(int i=0;i<n;i++){
            if(grid[u][i]==1 && !vis[i]){
                dfs(i,n,grid);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,n,isConnected);
            }
        }
        return cnt;
    }
};
