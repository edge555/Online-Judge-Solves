class Solution {
public:
    int edgeScore(vector<int>& edges) {
        unordered_map<int,long long>mp;
        long long i=0;
        for(auto u:edges){
            mp[u]+=i;
            i++;
        }
        long long mx=-1;
        for(auto it:mp){
            mx=max(mx,it.second);
        }
        int ans=-1;
        for(auto it:mp){
            if(it.second==mx){
                if(ans==-1){
                    ans=it.first;
                }
                else{
                    ans=min(ans,it.first);
                }
            }
        }
        return ans;
    }
};
