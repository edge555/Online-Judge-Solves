class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int>mp,end;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:nums){
            if(mp[x]==0){
                continue;
            }
            if(end[x]>0){
                end[x]--;
                mp[x]--;
                end[x+1]++;
            }
            else if(mp[x+1]>0 && mp[x+2]>0){
                mp[x]--;
                mp[x+1]--;
                mp[x+2]--;
                end[x+3]++;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
