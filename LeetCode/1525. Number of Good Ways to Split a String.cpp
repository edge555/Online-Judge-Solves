class Solution {
public:
    int numSplits(string s) {
        unordered_map<char,int>mp,mp2;
        for(auto c:s){
            mp2[c]++;
        }
        int cnt=0;
        for(auto c:s){
            mp[c]++;
            mp2[c]--;
            if(mp2[c]==0){
                mp2.erase(mp2.find(c));
            }
            cnt+=mp.size()==mp2.size();
        }
        return cnt;
    }
};
