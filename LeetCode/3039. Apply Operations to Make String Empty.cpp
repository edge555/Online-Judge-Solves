class Solution {
public:
    static bool comp(pair<char,int>&a, pair<char,int>&b){
        return a.second<b.second;
    }
    string lastNonEmptyString(string s) {
        unordered_map<char,int>mp,ind;
        int mx=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            mx=max(mx,mp[s[i]]);
            ind[s[i]]=i;
        }
        vector<pair<char,int>>vec;
        for(char c='a';c<='z';c++){
            if(mp[c]==mx){
                vec.push_back({c,ind[c]});
            }
        }
        sort(vec.begin(),vec.end(),comp);
        string ans="";
        for(auto p:vec){
            ans+=p.first;
        }
        return ans;
    }
};
