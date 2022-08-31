class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int,int>mp,mp2;
        for(auto x:target){
            mp[x]++;
        }
        for(auto x:arr){
            mp2[x]++;
        }
        return mp==mp2;
    }
};
