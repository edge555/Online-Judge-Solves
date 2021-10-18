class Solution {
public:
    string sortString(string s) {
        map<char,int>mp;
        for(auto c:s){
            mp[c]++;
        }
        string ans="";
        while(ans.size()!=s.size()){
            char last='.';
            for(auto it:mp){
                if(it.second>0){
                    last=it.first;
                    break;
                }
            }
            if(last=='.'){
                break;
            }
            ans+=last;
            mp[last]--;
            while(1){
                bool chk=true;
                for(char x=last+1;x<='z';x++){
                    if(mp[x]>0){
                        chk=false;
                        ans+=x;
                        mp[x]--;
                        last=x;
                        break;
                    }
                }
                if(chk){
                    break;
                }
            }
            last='.';
            for(auto it:mp){
                if(it.second>0){
                    last=it.first;
                }
            }
            if(last=='.'){
                break;
            }
            ans+=last;
            mp[last]--;
            while(1){
                bool chk=true;
                for(char x=last-1;x>='a';x--){
                    if(mp[x]>0){
                        chk=false;
                        ans+=x;
                        mp[x]--;
                        last=x;
                        break;
                    }
                }
                if(chk){
                    break;
                }
            }

        }
        return ans;
    }
};
