class Solution {
public:
    int shareCandies(vector<int>& candies, int k) {
        unordered_map<int,int>mp,all;
        for(auto x:candies){
            all[x]++;
        }
        int st=0,en=k-1,alltaken=0;
        for(int i=0;i<=en;i++){
            mp[candies[i]]++;
        }
        for(auto it:mp){
            if(it.second==all[it.first]){
                alltaken++;
            }
        }
        int ans=alltaken;
        while(en<candies.size()-1){
            if(mp[candies[st]]==all[candies[st]]){
                alltaken--;
            }
            mp[candies[st++]]--;
            mp[candies[++en]]++;
            if(mp[candies[en]]==all[candies[en]]){
                alltaken++;
            }
            ans=min(ans,alltaken);
        }
        return all.size()-ans;
    }
};
