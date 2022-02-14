class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()){
            return false;
        }
        set<char>st,st2;
        unordered_map<char,int>mp,mp2;
        for(auto c:word1){
            mp[c]++;
            st.insert(c);
        }
        for(auto c:word2){
            mp2[c]++;
            st2.insert(c);
        }
        if(st!=st2){
            return false;
        }
        vector<int>vec,vec2;
        for(auto it:mp){
            vec.push_back(it.second);
        }
        for(auto it:mp2){
            vec2.push_back(it.second);
        }
        sort(vec.begin(),vec.end());
        sort(vec2.begin(),vec2.end());
        return vec==vec2;
    }
};
