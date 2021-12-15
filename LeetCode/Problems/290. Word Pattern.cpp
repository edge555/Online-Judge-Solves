class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,int>mp;
        vector<int>vec,vec2;
        int now = 0;
        for(auto x: pattern){
            if(mp.find(x)==mp.end()){
                mp[x]=now++;
            }
            vec.push_back(mp[x]);
        }
        stringstream ss(s);
        string t;
        now = 0;
        map<string,int>mp2;
        while(ss>>t){
            if(mp2.find(t)==mp2.end()){
                mp2[t]=now++;
            }
            vec2.push_back(mp2[t]);
        }
        return vec==vec2;
    }
};
