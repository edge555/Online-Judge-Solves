class Solution {
public:
    bool check(unordered_map<char,int>&mp,unordered_map<char,int>&mp2){
        for(char c='a';c<='z';c++){
            if(mp[c]>mp2[c]){
                return false;
            }
        }
        for(char c='A';c<='Z';c++){
            if(mp[c]>mp2[c]){
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        unordered_map<char,int>mp,mp2;
        for(auto c:t){
            mp[c]++;
        }
        int i=0,st=0,en=0;
        pair<int,int>ans={-1,-1};
        while(i<s.size()){
            en=i;
            mp2[s[i]]++;
            i++;
            if(check(mp,mp2)){
                ans={st,en};
                break;
            }
        }
        if(ans.first==-1 && ans.second==-1){
            return "";
        }
        while(mp2[s[st]]>mp[s[st]]){
            mp2[s[st]]--;
            st++;
        }
        if(ans.second-ans.first>en-st){
            ans={st,en};
        }
        while(i<s.size()){
            en=i;
            mp2[s[en]]++;
            while(mp2[s[st]]>mp[s[st]]){
                mp2[s[st]]--;
                st++;
            }
            if(ans.second-ans.first>en-st){
                ans={st,en};
            }
            i++;
        }
        while(mp2[s[st]]>mp[s[st]]){
            mp2[s[st]]--;
            st++;
        }
        if(ans.second-ans.first>en-st){
            ans={st,en};
        }
        string p="";
        for(int i=ans.first;i<=ans.second;i++){
            p+=s[i];
        }
        return p;
    }
};
