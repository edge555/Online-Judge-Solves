class RecentCounter {
public:
    queue<int>q;
    RecentCounter() {
        while(!q.empty()){
            q.pop();
        }
    }

    int ping(int t) {
        q.push(t);
        while(!q.empty()){
            if(q.front()<t-3000){
                q.pop();
            }
            else{
                break;
            }
        }
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
