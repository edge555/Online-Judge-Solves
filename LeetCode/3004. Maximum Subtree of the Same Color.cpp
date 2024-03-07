class Solution {
public:
    vector<int>grid[50001];
    int sub[50001];
    int ans=1;
    int dfs(int u,vector<int>& colors){
        int sub=1;
        for(auto v:grid[u]){
            if(colors[u]!=colors[v]){
              sub=-1;
            }
            int res=dfs(v,colors);
            if(res==-1){
                sub=-1;
            }
            else if(sub!=-1){
                sub+=res;
            }
        }
        ans=max(ans,sub);
        return sub;
    }

    int maximumSubtreeSize(vector<vector<int>>& edges, vector<int>& colors) {
        if(edges.size()==0){
            return 1;
        }
        for(auto v:edges){
            grid[v[0]].push_back(v[1]);
        }
        dfs(0,colors);
        return ans;
    }
};
