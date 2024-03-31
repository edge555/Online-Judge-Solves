class Solution {
public:
    int partitionString(string s) {
        int cnt=0;
        unordered_map<char,int>mp;
        for(auto c:s){
            if(mp[c]==0){
                mp[c]++;
            }
            else{
                cnt++;
                mp.clear();
                mp[c]=1;
            }
        }
        if(mp.size()){
            cnt++;
        }
        return cnt;
    }
};
