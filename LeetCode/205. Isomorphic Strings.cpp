class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>vec,vec2;
        map<char,int>mp;
        int i,cur=0;
        for(i=0;i<s.size();i++){
            char c=s[i];
            if(mp.find(c)==mp.end()){
                mp[c]=cur++;
            }
            vec.push_back(mp[c]);
        }
        mp.clear();
        cur=0;
        for(i=0;i<t.size();i++){
            char c=t[i];
            if(mp.find(c)==mp.end()){
                mp[c]=cur++;
            }
            vec2.push_back(mp[c]);
        }
        return vec==vec2;
    }
};
