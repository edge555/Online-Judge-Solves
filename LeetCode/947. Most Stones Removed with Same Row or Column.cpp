class Solution {
public:
    unordered_map<int,int>vis;
    vector<int>grid[1001];
    int cnt;
    void dfs(int u){
        vis[u]++;
        cnt++;
        for(auto v:grid[u]){
            if(!vis.count(v)){
                dfs(v);
            }
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(stones[i][0]==stones[j][0] || stones[i][1]==stones[j][1]){
                    grid[i].push_back(j);
                    grid[j].push_back(i);
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(!vis.count(i)){
                cnt=0;
                dfs(i);
                ans+=cnt-1;
            }
        }
        return ans;
    }
};
