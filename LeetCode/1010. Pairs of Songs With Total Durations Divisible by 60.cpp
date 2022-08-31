class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int>mp;
        for(auto x:time){
            mp[x%60]++;
        }
        int cnt=0;
        for(auto x:time){
            int r=x%60;
            mp[r]--;
            cnt+=mp[(60-r)%60];
        }
        return cnt;
    }
};
