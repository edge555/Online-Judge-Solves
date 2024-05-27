class Solution {
public:
    static bool possible(long long cnt,long long up,long long sel, long long mon, long long k){
        long long tot=mon;
        if(cnt>k){
            tot+=(cnt-k)*sel*1LL;
        }
        return tot>=k*up;
    }
    vector<int> maxUpgrades(vector<int>& count, vector<int>& upgrade, vector<int>& sell, vector<int>& money) {
        vector<int>vec;
        for(int i=0;i<count.size();i++){
            int lo=1,hi=count[i],ans=0;
            while(lo<=hi){
                int mid=(lo+hi)>>1;
                if(possible(count[i],upgrade[i],sell[i],money[i],mid)){
                    lo=mid+1;
                    ans=max(ans,mid);
                }
                else{
                    hi=mid-1;
                }
            }
            vec.push_back(ans);
        }
        return vec;
    }
};
