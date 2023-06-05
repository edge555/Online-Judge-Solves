class Solution {
public:
    long long getSum(long long x){
        return (x*(x+1))>>1;
    }
    long long getrangesum(long long a,long long b){
        return getSum(b)-getSum(a-1);
    }
    int maxCount(vector<int>& banned, int n, long long maxSum) {
        long long sum=0,bansum=0;
        int cnt=0,lastind=-1;
        sort(banned.begin(),banned.end());
        for(int i=0;i<banned.size();i++){
            if(i!=0){
                if(banned[i]==banned[i-1]){
                    continue;
                }
            }
            long long x=banned[i];
            bansum+=x;
            long long tillsum=getSum(x);
            long long cursum=tillsum-bansum;
            if(maxSum>=cursum){
                cnt=x-(i+1);
                lastind=i;
                sum=cursum;
            }
            else{
                break;
            }
        }
        if(sum<maxSum){
            long long mx=0;
            long long rem=maxSum-sum;
            long long lastnum;
            if(lastind==-1){
                lastnum=1;
            }
            else{
                lastnum=banned[lastind]+1;
            }
            long long lo=lastnum,hi=n;
            while(lo<=hi){
                long long mid=(lo+hi)>>1;
                long long rangesum=getrangesum(lastnum,mid);
                if(rangesum<=rem){
                    lo=mid+1;
                    mx=max(mx,mid-lastnum+1);
                }
                else{
                    hi=mid-1;
                }
            }
            cnt+=mx;
        }
        return cnt;
    }
};
