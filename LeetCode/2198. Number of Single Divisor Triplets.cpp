class Solution {
public:
    long long singleDivisorTriplet(vector<int>& nums) {
        unordered_map<int,long long>mp;
        for(auto x:nums){
            mp[x]++;
        }
        long long ans=0;
        for(int i=1;i<=100;i++){
            for(int j=i;j<=100;j++){
                for(int k=j;k<=100;k++){
                    int sum=i+j+k;
                    int cnt=0;
                    if(sum%i==0){
                        cnt++;
                    }
                    if(sum%j==0){
                        cnt++;
                    }
                    if(sum%k==0){
                        cnt++;
                    }
                    if(cnt==1){
                        if(i==j){
                            ans+=mp[i]*(mp[i]-1)/2*mp[k];
                        }
                        else if(j==k){
                            ans+=mp[j]*(mp[j]-1)/2*mp[i];
                        }
                        else{
                            ans+=mp[i]*mp[j]*mp[k];
                        }
                    }
                }
            }
        }
        return ans*6;
    }
};
