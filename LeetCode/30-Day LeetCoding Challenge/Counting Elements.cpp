class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_map<int,bool>mp;
        int cnt=0;
        for(auto x:arr)
            mp[x]=true;
        for(auto x:arr)
        {
            if(mp[x+1])
                cnt++;
        }
        return cnt;
    }
};
