class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        long long ans=0;
        unordered_map<int,int>mp;
        for(auto x:nums2){
            mp[x]++;
        }
        unordered_map<int,int>chk;
        for(auto x:nums1){
            if(chk.count(x)){
                ans+=chk[x];
                continue;
            }
            if(x%k==0){
                x/=k;
                long long cnt=0;
                for(int i=1;i*i<=x;i++){
                    if(x%i==0){
                        if(mp.count(i)){
                            cnt+=mp[i];
                        }
                        int p=x/i;
                        if(p!=i){
                            if(mp.count(p)){
                                cnt+=mp[p];
                            }
                        }
                    }
                }
                chk[x*k]=cnt;
                ans+=cnt;
            }
        }
        return ans;
    }
};
