class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        bool vis[1001];
        memset(vis,false,sizeof(vis));
        queue<int>q;
        unordered_map<int,bool>mp;
        for(auto x:rooms[0]){
            q.push(x);
            mp[x]=true;
        }
        vis[0]=true;
        while(!q.empty()){
            int r=q.front();
            q.pop();
            vis[r]=true;
            if(mp[r]){
                for(auto x:rooms[r]){
                    if(!vis[x]){
                        mp[x]=true;
                        q.push(x);
                    }
                }
            }
        }
        for(int i=0;i<rooms.size();i++){
            if(!vis[i]){
                return false;
            }
        }
        return true;
    }
};
