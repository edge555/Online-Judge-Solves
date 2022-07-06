class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int,char>>pq;
        unordered_map<char,int>mp;
        for(auto c:s){
            mp[c]++;
        }
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        string ans="";
        while(pq.size()>1){
            pair<int,char>p1=pq.top();
            pq.pop();
            pair<int,char>p2=pq.top();
            pq.pop();
            ans+=p1.second;
            ans+=p2.second;
            p1.first--;
            p2.first--;
            if(p1.first){
                pq.push(p1);
            }
            if(p2.first){
                pq.push(p2);
            }
        }
        if(!pq.empty()){
            pair<int,char>p1=pq.top();
            if(p1.first>1 || ans[ans.size()-1]==p1.second){
                return "";
            }
            ans+=p1.second;
        }
        return ans;
    }
};
