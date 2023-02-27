class Solution {
public:
    int connectSticks(vector<int>& sticks) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto x:sticks){
            pq.push(x);
        }
        int sum=0;
        while(pq.size()>1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            sum+=(x+y);
            pq.push(x+y);
        }
        return sum;
    }
};
