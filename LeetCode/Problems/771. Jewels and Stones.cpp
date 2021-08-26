class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,bool>mp;
        for(auto c:jewels)
            mp[c]=true;
        int cnt=0;
        for(auto c:stones)
            cnt+=mp[c];
        return cnt;
    }
};
