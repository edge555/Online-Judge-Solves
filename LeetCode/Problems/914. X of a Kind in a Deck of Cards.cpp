class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int>mp;
        vector<int>vec;
        for(auto x:deck){
            mp[x]++;
        }
        for(auto it:mp){
            vec.push_back(it.second);
        }
        int ans=vec[0];
        for(auto x:vec){
            ans=__gcd(ans,x);
        }
        return ans!=1;
    }
};
