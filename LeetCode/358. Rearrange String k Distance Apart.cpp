class Solution {
public:
    string rearrangeString(string s, int k) {
        priority_queue<pair<int,char>>pq;
        queue<pair<int,char>>q;
        unordered_map<char,int>mp;
        for(auto c:s){
            mp[c]++;
        }
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        string ans="";
        while(!pq.empty()){
            auto p=pq.top();
            pq.pop();
            ans+=p.second;
            q.push({p.first-1,p.second});
            if(q.size()>=k){
                auto x=q.front();
                q.pop();
                if(x.first){
                    pq.push(x);
                }
            }
        }
        if(ans.size()!=s.size()){
            ans="";
        }
        return ans;
    }
};
