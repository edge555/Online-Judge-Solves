class Solution {
public:
    int countBlocks(BigArray* nums) {
        long long sz=nums->size();
        int cnt=0;
        for(long long i=0;i<sz;i++){
            cnt++;
            long long lo=i+1,hi=sz-1,ind=i;
            while(lo<=hi){
                long long mid=(lo+hi)>>1;
                if(nums->at(mid)==nums->at(i)){
                    lo=mid+1;
                    ind=mid;
                }
                else{
                    hi=mid-1;
                }
            }
            i=ind;
        }
        return cnt;
    }
};
