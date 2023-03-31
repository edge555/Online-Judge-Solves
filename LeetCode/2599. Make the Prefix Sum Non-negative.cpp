class Solution {
public:
    int makePrefSumNonNegative(vector<int>& nums) {
        int cnt=0;
        long long sum=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        bool f=false;
        for(auto x:nums){
            sum+=x;
            pq.push(x);
            if(sum<0){
                cnt++;
                sum-=pq.top();
                pq.pop();
            }
        }
        return cnt;
    }
};