class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto x:arr){
            mp[x]++;
        }
        int cnt=0;
        for(auto x:mp){
            if(mp.count(x.first+1)){
                cnt+=x.second;
            }
        }
        return cnt;
    }
};
