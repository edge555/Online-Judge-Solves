class Solution {
public:
    bool isArmstrong(int n) {
        int k=log10(n)+1;
        int m=n,sum=0;
        while(m>0){
            int r=m%10;
            sum+=pow(r,k);
            m/=10;
        }
        return sum==n;
    }
};
