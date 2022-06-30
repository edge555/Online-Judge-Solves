class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(auto x:piles){
            pq.push(x);
        }
        while(k--){
            if(pq.empty()){
                break;
            }
            int r=pq.top()/2;
            int p=pq.top()-r;
            pq.pop();
            if(p>0){
                pq.push(p);
            }
        }
        int cnt=0;
        while(!pq.empty()){
            cnt+=pq.top();
            pq.pop();
        }
        return cnt;
    }
};
