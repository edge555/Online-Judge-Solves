class Solution {
public:
    long long ans=1e18;
    int smallestFactorization(int num) {
        if(num<=9){
            return num;
        }
        vector<int>mp(10,0);
        while(num>0 && num%2==0){
            mp[2]++;
            num>>=1;
        }
        for(long long i=3;i<=9;i+=2){
            while(num%i==0){
                mp[i]++;
                num/=i;
            }
        }
        if(num>0){
            if(num<=9){
                mp[num]++;
            }
            else{
                return 0;
            }
        }
        long long x=0;
        while(mp[3]>1){
            mp[9]++;
            mp[3]-=2;
        }
        while(mp[2]>2){
            mp[8]++;
            mp[2]-=3;
        }
        while(mp[3]>0 && mp[2]>0){
            mp[6]++;
            mp[3]--;
            mp[2]--;
        }
        while(mp[2]>1){
            mp[4]++;
            mp[2]-=2;
        }
        while(mp[4]>0 && mp[2]>0){
            mp[8]++;
            mp[4]--;
            mp[2]--;
        }
        for(int i=2;i<=9;i++){
            int r=mp[i];
            while(r--){
                x*=10;
                x+=i;
            }
        }
        if(x>2147483647){
            return 0;
        }
        return x;
    }
};
