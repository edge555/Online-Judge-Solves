class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(auto x:arr){
            mp[x]++;
        }
        set<int>st;
        for(auto it:mp){
            st.insert(it.second);
        }
        return st.size()==mp.size();
    }
};
