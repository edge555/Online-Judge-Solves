class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        priority_queue<pair<char,int>>pq;
        unordered_map<char,int>mp;
        for(auto c:s){
            mp[c]++;
        }
        for(auto it:mp){
            pq.push({it.first,it.second});
        }
        string ans="";
        while(!pq.empty()){
            pair<char,int>p=pq.top();
            pq.pop();
            if(p.second<=repeatLimit){
                for(int i=0;i<p.second;i++){
                    ans+=p.first;
                }
            }
            else{
                for(int i=0;i<repeatLimit;i++){
                    ans+=p.first;
                }
                if(pq.empty()){
                    break;
                }
                pair<char,int>q=pq.top();
                ans+=q.first;
                pq.pop();
                if(q.second>=2){
                    pq.push({q.first,q.second-1});
                }
                pq.push({p.first,p.second-repeatLimit});
            }
        }
        return ans;
    }
};
