class Solution {
public:
    static int sod(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int countBalls(int lowLimit, int highLimit) {
        int i,ara[100005],sum,mx=0;
        memset(ara,0,sizeof(ara));
        for(i=lowLimit;i<=highLimit;i++){
            int sum=sod(i);
            ara[sum]++;
            mx=max(mx,ara[sum]);
        }
        return mx;
    }
};
