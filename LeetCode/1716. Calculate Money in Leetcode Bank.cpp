class Solution {
public:
    int sum(int n){
        return (n*(n+1))>>1;
    }
    int totalMoney(int n) {
        int p=n/7;
        int r=n%7;
        int ans=0;
        for(int i=0;i<p;i++){
            ans+=7*(4+i);
        }
        ans+=sum(p+r)-sum(p);
        return ans;
    }
};
