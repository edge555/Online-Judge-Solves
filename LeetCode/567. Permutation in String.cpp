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
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        memset(ara,0,sizeof(ara));
        memset(temp,0,sizeof(temp));
        for(auto c:s1){
            ara[c-'a']++;
        }
        int st=0,en=s1.size()-1;
        for(int i=0;i<=en;i++){
            temp[s2[i]-'a']++;
        }
        if(equal()){
            return true;
        }
        while(en<s2.size()-1){
            temp[s2[st]-'a']--;
            st++;
            en++;
            temp[s2[en]-'a']++;
            if(equal()){
                return true;
            }
        }
        return false;
    }
};
