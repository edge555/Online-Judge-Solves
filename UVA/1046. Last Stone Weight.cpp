class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto x:stones){
            pq.push(x);
        }
        while(pq.size()>1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            int r=x-y;
            if(r){
                pq.push(r);
            }
        }
        if(pq.empty()){
            return 0;
        }
        return pq.top();
    }
};
