class Solution {
public:
    map<pair<int,int>,bool>mp;
    vector<int>grid[500005];
    bool vis[500005];
    int cnt=0;
    int minReorder(int n, vector<vector<int>>& connections) {
        for(auto v:connections){
            mp[{v[0],v[1]}]=true;
            grid[v[0]].push_back(v[1]);
            grid[v[1]].push_back(v[0]);
        }
        queue<int>q;
        q.push(0);
        vis[0]=true;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(auto v:grid[u]){
                if(!vis[v]){
                    if(mp.find({u,v})!=mp.end()){
                        cnt++;
                    }
                    vis[v]=true;
                    q.push(v);
                }
            }
        }
        return cnt;
    }
};
