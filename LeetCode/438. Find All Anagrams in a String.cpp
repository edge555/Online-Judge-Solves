class Solution {
public:
    int ara[26],temp[26];
    bool equal(){
        for(int i=0;i<26;i++){
            if(ara[i]!=temp[i]){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(p.size()>s.size()){
            return ans;
        }
        memset(ara,0,sizeof(ara));
        memset(temp,0,sizeof(temp));
        for(auto c:p){
            ara[c-'a']++;
        }
        int st=0,en=p.size()-1;
        for(int i=0;i<=en;i++){
            temp[s[i]-'a']++;
        }
        if(equal()){
            ans.push_back(st);
        }
        while(en<s.size()-1){
            temp[s[st]-'a']--;
            st++;
            en++;
            temp[s[en]-'a']++;
            if(equal()){
                ans.push_back(st);
            }
        }
        return ans;
    }
};
