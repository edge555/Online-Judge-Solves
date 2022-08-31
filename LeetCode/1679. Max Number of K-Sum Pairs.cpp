class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        int cnt=0;
        for(auto it:mp){
            if(it.first*2>k){
                break;
            }
            int a=it.first,b=k-a;
            if(a==b){
                cnt+=it.second/2;
            }
            else{
                if(mp.find(b)!=mp.end()){
                    cnt+=min(it.second,mp[b]);
                }
            }
        }
        return cnt;
    }
};
