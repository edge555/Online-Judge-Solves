class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int ans=INT_MAX;
        unordered_map<int,int>mp;
        for(int i=0;i<cards.size();i++){
            int x=cards[i];
            if(mp.count(x)){
                ans=min(ans,i-mp[x]+1);
            }
            mp[x]=i;
        }
        if(ans==INT_MAX){
            ans=-1;
        }
        return ans;
    }
};
