class Solution {
public:
    long long smallestNumber(long long num) {
        unordered_map<int,int>mp;
        long long ans=0;
        if(num>=0){
            while(num>0){
                mp[num%10]++;
                num/=10;
            }
            if(mp[0]>0){
                for(int i=1;i<=9;i++){
                    if(mp[i]>0){
                        ans=i;
                        mp[i]--;
                        break;
                    }
                }
            }
            for(int i=0;i<=9;i++){
                while(mp[i]>0){
                    ans*=10;
                    ans+=i;
                    mp[i]--;
                }
            }
            while(mp[0]>0){
                ans*=10;
                mp[0]--;
            }
        }
        else{
            num*=-1;
            while(num>0){
                mp[num%10]++;
                num/=10;
            }
            for(int i=9;i>=0;i--){
                while(mp[i]>0){
                    ans*=10;
                    ans+=i;
                    mp[i]--;
                }
            }
            ans*=-1;
        }
        return ans;
    }
};
