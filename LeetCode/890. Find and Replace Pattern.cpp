class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        unordered_map<char,int>mp;
        int now=0;
        vector<int>vec;
        for(auto c:pattern){
            if(mp.find(c)==mp.end()){
                mp[c]=now++;
            }
            vec.push_back(mp[c]);
        }
        vector<string>ans;
        for(auto s:words){
            mp.clear();
            vector<int>temp;
            now=0;
            for(auto c:s){
                if(mp.find(c)==mp.end()){
                    mp[c]=now++;
                }
                temp.push_back(mp[c]);
            }
            if(temp==vec){
                ans.push_back(s);
            }
        }
        return ans;
    }
};
