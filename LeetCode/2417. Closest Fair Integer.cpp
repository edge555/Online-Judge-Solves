class Solution {
public:
    bool check(int n){
        int dig=log10(n)+1;
        int even=0;
        while(n){
            if(n%2==0){
                even++;
            }
            n/=10;
        }
        return even==dig/2;
    }
    int getAnsForOdd(int dig){
        int ans=1;
        int r=(dig+1)/2;
        while(r--){
            ans*=10;
        }
        r=(dig/2);
        while(r--){
            ans*=10;
            ans++;
        }
        return ans;
    }
    int closestFair(int n) {
        int dig=log10(n)+1;
        if(dig&1){
            return getAnsForOdd(dig);
        }
        while(1){
            dig=log10(n)+1;
            if(dig&1){
                return getAnsForOdd(dig);
            }
            else if(check(n)){
                return n;
            }
            n++;
        }
        return -1;
    }
};
