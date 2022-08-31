class Solution {
public:
    vector<string>changeAtIndex(string &s,int ind){
        vector<string>ans;
        string a="",b="";
        for(int i=0;i<s.size();i++){
            if(i==ind){
                int r=s[i]-'0';
                int x=(r+1)%10;
                a+=char(x+48);
                int y=r-1;
                if(y==-1){
                    y=9;
                }
                b+=char(y+48);
            }
            else{
                a+=s[i];
                b+=s[i];
            }
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
    int openLock(vector<string>& deadends, string target) {
        unordered_map<string,bool>vis,block;
        for(auto p:deadends){
            if(p=="0000"){
                return -1;
            }
            block[p]=true;
        }
        string s="0000";
        queue<pair<string,int>>q;
        q.push({s,0});
        vis[s]=true;
        while(!q.empty()){
            pair<string,int>p=q.front();
            q.pop();
            string u=p.first;
            int cost=p.second;
            if(u==target){
                return cost;
            }
            for(int i=0;i<4;i++){
                vector<string>vec=changeAtIndex(u,i);
                for(auto x:vec){
                    if(vis.find(x)!=vis.end()){
                        continue;
                    }
                    if(block.find(x)==block.end()){
                        vis[x]=true;
                        if(x==target){
                            return cost+1;
                        }
                        q.push({x,cost+1});
                    }
                }
            }
        }
        return -1;
    }
};
