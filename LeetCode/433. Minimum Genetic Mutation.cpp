class Solution {
public:
    bool isMut(string &a,string &b){
        int cnt=0;
        for(int i=0;i<a.size();i++){
            cnt+=a[i]!=b[i];
        }
        return cnt==1;
    }
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_map<string,int>mp;
        queue<string>q;
        for(auto s:bank){
            if(isMut(s,start)){
                q.push(s);
                mp[s]=1;
            }
        }
        while(!q.empty()){
            string s=q.front();
            q.pop();
            if(s==end){
                return mp[s];
            }
            for(auto p:bank){
                if(mp.find(p)==mp.end()){
                    if(isMut(s,p)){
                        q.push(p);
                        mp[p]=mp[s]+1;
                    }
                }
            }
        }
        return -1;
    }
};
