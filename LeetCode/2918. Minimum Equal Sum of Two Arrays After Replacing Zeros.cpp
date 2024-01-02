class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0,sum2=0;
        int zero1=0,zero2=0;
        for(auto x:nums1){
            if(x==0){
                zero1++;
            }
            else{
                sum1+=x;
            }
        }
        for(auto x:nums2){
            if(x==0){
                zero2++;
            }
            else{
                sum2+=x;
            }
        }
        if(!zero1 && !zero2){
            if(sum1==sum2){
                return sum1;
            }
            return -1;
        }
        if(zero1 && !zero2){
            if(sum2>=sum1+zero1){
                return sum2;
            }
            return -1;
        }
        else if(!zero1 && zero2){
            if(sum1>=sum2+zero2){
                return sum1;
            }
            return -1;
        }
        else {
            return max(sum1+zero1,sum2+zero2);
        }
        return -1;
    }
};
