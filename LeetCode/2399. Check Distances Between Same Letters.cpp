class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int dis[27],dis2[27];
        bool vis[27];
        memset(dis,-1,sizeof(dis));
        memset(vis,false,sizeof(vis));
        for(int i=0;i<s.size();i++){
            int p=s[i]-'a';
            vis[p]=true;
            if(dis[p]==-1){
                dis[p]=i;
            }
            dis2[p]=i;
        }
        for(int i=0;i<26;i++){
            if(vis[i]==false){
                continue;
            }
            if(dis2[i]-dis[i]-1!=distance[i]){
                return false;
            }
        }
        return true;
    }
};
