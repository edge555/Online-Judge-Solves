class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string>st;
        int cnt=0;
        for(auto s:words){
            string temp = s;
            reverse(temp.begin(), temp.end());
            if(st.count(temp)){
                cnt++;
            }
            st.insert(s);
        }
        return cnt;
    }
};
