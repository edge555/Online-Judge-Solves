class Solution {
public:
    int mod(int n){
        int sum=1;
        while(n){
            sum*=n%10;
            n/=10;
        }
        return sum;
    }
    int sod(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int subtractProductAndSum(int n) {
        return mod(n)-sod(n);
    }
};
