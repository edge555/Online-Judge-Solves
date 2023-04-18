class Solution {
public:
    int getIndex(ArrayReader &reader) {
        int n=reader.length();
        int lo=0,hi=n-1;
        while(lo<hi){
            int mid=(lo+hi)>>1;
            int p=hi-lo+1;
            if(p&1){
                if(p==1){
                    return lo;
                }
                int q=reader.compareSub(lo,mid,mid,hi);
                if(q==1){
                    hi=mid-1;
                }
                else if(q==-1){
                    lo=mid+1;
                }
                else{
                    return mid;
                }
            }
            else{
                int q=reader.compareSub(lo,mid,mid+1,hi);

                if(q==1){
                    hi=mid;
                }
                else{
                    lo=mid+1;
                }

            }
        }
        return lo;
    }
};
