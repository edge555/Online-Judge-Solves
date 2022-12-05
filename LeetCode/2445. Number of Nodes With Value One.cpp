class Solution {
public:
    int numberOfNodes(int n, vector<int>& queries) {
        unordered_map<int,int>mp,freq;
        for(auto q:queries){
            mp[q]++;
        }
        queue<pair<int,int>>q;
        q.push({1,0});
        while(!q.empty()){
            pair<int,int>p=q.front();
            q.pop();
            int u=p.first, r=p.second;
            int val=(mp[u]+r)%2;
            freq[u]=val;
            int a=u*2,b=a+1;
            if(a<=n){
                q.push({a,val});
            }
            if(b<=n){
                q.push({b,val});
            }
        }
        int cnt=0;
        for(auto it:freq){
            cnt+=it.second;
        }
        return cnt;
    }
};
