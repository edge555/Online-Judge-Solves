class Solution {
public:
    bool possible(vector<int>& buckets, int loss, double mid){
        double extra=0.0;
        for(auto x:buckets){
            if(x>mid){
                extra+=x-mid;
            }
        }
        int p=100-loss;
        for(auto x:buckets){
            if(x>=mid){
                break;
            }
            double need=((mid-x)*100.0)/(p*1.0);
            if(extra>=need){
                extra-=need;
            }
            else{
                return false;
            }
        }
        return true;
    }
    double equalizeWater(vector<int>& buckets, int loss) {
        sort(buckets.begin(),buckets.end());
        double lo=0.0,hi=buckets.back(),ans=0.0;
        int itr=100;
        while(itr--){
            double mid=(lo+hi)/2.0;
            if(possible(buckets,loss,mid)){
                lo=mid;
                ans=max(ans,mid);
            }
            else{
                hi=mid;
            }
        }
        return ans;
    }
};
