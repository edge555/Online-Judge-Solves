class Solution {
public:
    bool possible(long long mid,long long finalSum){
        mid--;
        long long a=mid*(mid+1);
        long long lastterm=(mid+1)<<1;
        long long rem=finalSum-a;
        return rem>=lastterm;
    }
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long>vec;
        if(finalSum&1){
            return vec;
        }
        long long lo=1,hi=finalSum/2,ans=0;
        while(lo<=hi){
            long long mid=(lo+hi)>>1;
            if(possible(mid,finalSum)){
                ans=mid;
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }

        for(long long i=0;i<ans-1;i++){
            long long r=(i+1)*2;
            vec.push_back(r);
            finalSum-=r;
        }
        vec.push_back(finalSum);
        return vec;
    }
};
