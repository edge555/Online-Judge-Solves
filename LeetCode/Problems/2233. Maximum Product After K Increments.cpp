class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto x:nums){
            pq.push(x);
        }
        while(k>0){
            int p=pq.top();
            pq.pop();
            if(!pq.empty()){
                int r=pq.top();
                int need=r-p;
                if(need==0){
                    p++;
                    k--;
                    pq.push(p);
                    continue;
                }
                if(k>=need){
                    p+=need;
                    k-=need;
                }
                else{
                    p+=k;
                    k=0;
                }
                pq.push(p);
            }
            else{
                p+=k;
                pq.push(p);
                k=0;
            }
        }
        long long ans=1;
        while(!pq.empty()){
            ans=(((ans%1000000007)*(pq.top()%1000000007))%1000000007);
            pq.pop();
        }
        return ans;
    }
};
