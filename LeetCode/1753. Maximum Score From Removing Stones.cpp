class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int ans=0;
        while(!pq.empty()){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            if(b<=0){
                break;
            }
            pq.pop();
            ans++;
            pq.push(a-1);
            pq.push(b-1);
        }
        return ans;
    }
};
