class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt=0;
        deque<long long>dq;
        for(auto x:nums){
            dq.push_back(x);
        }
        while(dq.size()>=2){
            long long x=dq.front();
            long long y=dq.back();
            if(x==y){
                dq.pop_front();
                dq.pop_back();
                continue;
            }
            cnt++;
            if(x>y){
                dq.pop_back();
                y+=dq.back();
                dq.pop_back();
                dq.push_back(y);
            }
            else{
                dq.pop_front();
                x+=dq.front();
                dq.pop_front();
                dq.push_front(x);
            }
        }
        return cnt;
    }
};