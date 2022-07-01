class Solution {
public:
    int halveArray(vector<int>& nums) {
        double sum=0;
        priority_queue<double>pq;
        for(auto x:nums){
            sum+=x*1.0;
            pq.push(x*1.0);
        }
        int cnt=0;
        double reduced=0.0;
        while(!pq.empty()){
            cnt++;
            double a=pq.top();
            a/=2.0;
            reduced+=a;
            pq.pop();
            if(a>0){
                pq.push(a);
            }
            if(reduced>=sum/2.0){
                break;
            }

        }

        return cnt;
    }
};
