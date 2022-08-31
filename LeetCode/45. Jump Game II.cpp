class Solution {
public:
    vector<int>grid[10000];
    bool vis[10000];
    int cost[10000];
    int jump(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i];j++){
                grid[i].push_back(i+j+1);
            }
        }
        queue<int>q;
        q.push(0);
        vis[0]=true;
        cost[0]=0;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(auto v:grid[u]){
                if(!vis[v]){
                    vis[v]=true;
                    cost[v]=cost[u]+1;
                    if(v==nums.size()-1){
                        return cost[v];
                    }
                    q.push(v);
                }
            }
        }
        return 0;
    }
};
