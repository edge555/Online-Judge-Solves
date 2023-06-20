class Solution {
public:
    long long MOD=1e9+7;
    long long bigmod(long long a, long long p) {
        long long res=1%MOD,x=a%MOD;
        while(p)
        {
            if(p&1)
                res=(res*x)%MOD;
            x=(x*x)%MOD;
            p>>=1;
        }
        return res;
    }

    int maxFrequencyScore(vector<int>& nums, int k) {
        long long sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<k;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            sum+=bigmod(it.first,it.second)%MOD;
        }
        long long ans=sum%MOD;
        int st=0,en=k-1;
        while(en<nums.size()-1){
            int num1=nums[st];
            if(mp[num1]==1){
                sum=(sum+MOD-num1)%MOD;
                mp.erase(mp.find(num1));
            }
            else{
                sum=(sum-bigmod(num1,mp[num1])+MOD)%MOD;
                mp[num1]--;
                sum=(sum+bigmod(num1,mp[num1])+MOD)%MOD;
            }
            st++;
            int num2=nums[++en];
            mp[num2]++;
            if(mp[num2]>1){
                long long del=bigmod(num2,mp[num2]-1)%MOD;
                sum=(sum+MOD-del)%MOD;
            }
            long long y=bigmod(num2,mp[num2])%MOD;
            sum=(sum+y)%MOD;
            ans=max(ans,sum);
        }
        return ans;
    }
};
