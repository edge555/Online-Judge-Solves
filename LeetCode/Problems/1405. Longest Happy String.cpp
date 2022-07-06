class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>pq;
        char ch='.';
        if(a>0){
            pq.push({a,'a'});
        }
        if(b>0){
            pq.push({b,'b'});
        }
        if(c>0){
            pq.push({c,'c'});
        }
        string ans="";
        while(pq.size()>1){
            pair<int,char>p1=pq.top();
            pq.pop();
            pair<int,char>p2=pq.top();
            pq.pop();
            int r=min(p1.first,2);
            if(ch==p1.second){
                r=1;
            }
            p1.first-=r;
            while(r--){
                ans+=p1.second;
            }
            ch=p1.second;
            ans+=p2.second;
            p2.first--;
            ch=p2.second;
            if(p1.first>0){
                pq.push(p1);
            }
            if(p2.first>0){
                pq.push(p2);
            }
        }
        if(!pq.empty()){
            pair<int,char>p1=pq.top();
            int r=min(2,p1.first);
            if(ch==p1.second){
                r=1;
            }
            while(r--){
                ans+=p1.second;
            }
            pq.pop();
        }
        return ans;
    }
};
