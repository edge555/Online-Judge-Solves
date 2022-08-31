class Solution {
public:
    vector<vector<int>> ans;
    int n;
    int grid[16][16];
    void dfs(int cur,vector<int>path){
        if(cur==n-1){
            ans.push_back(path);
            return;
        }
        for(int i=0;i<n;i++){
            if(cur!=i){
                if(grid[cur][i]){
                    vector<int>temp=path;
                    temp.push_back(i);
                    dfs(i,temp);
                }
            }
        }
        return;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        n=graph.size();
        memset(grid,0,sizeof(grid));
        for(int i=0;i<n;i++){
            for(int j=0;j<graph[i].size();j++){
                grid[i][graph[i][j]]=1;
            }
        }
        vector<int>vec={0};
        dfs(0,vec);
        return ans;
    }
};
