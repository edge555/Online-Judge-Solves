class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int sz=(int)(s.size());
        unordered_set<string>st;
        for(int i=0;i<=sz-k;i++){
            string t=s.substr(i,k);
            st.insert(t);
        }
        return st.size()==(1<<k);
    }
};
