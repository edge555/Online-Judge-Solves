class Solution {
public:
    int guessNumber(int n) {
        long long lo = 1, hi = pow(2,31)-1;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            int r=guess(mid);
            if(r==0){
                return mid;
            }
            else if(r==1){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return 0;
    }
};
