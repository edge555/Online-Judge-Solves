class Solution {
public:
    vector<int>grid[100005];
    bool vis[100005];
    int cnt=0;
    void dfs(int &u){
        cnt++;
        for(auto v:grid[u]){
            if(!vis[v]){
                vis[v]=true;
                dfs(v);
            }
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        for(auto v:edges){
            grid[v[0]].push_back(v[1]);
            grid[v[1]].push_back(v[0]);
        }
        vector<int>vec;
        long long sum=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                cnt=0;
                vis[i]=true;
                dfs(i);
                vec.push_back(cnt);
                sum+=cnt;
            }
        }
        long long ans=0;
        for(auto x:vec){
            sum-=x;
            ans+=(x*sum);
        }
        return ans;
    }
};
