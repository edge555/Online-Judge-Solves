class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        int ara[30],freq[30];
        memset(ara,0,sizeof(ara));
        for(auto c:licensePlate){
            if((c>='A' && c<='Z') || (c>='a' && c<='z')){
                if(c>='A' && c<='Z'){
                    ara[c-'A']++;
                }
                else{
                    ara[c-'a']++;
                }
            }
        }
        int len=INT_MAX;
        vector<string>ans;
        for(auto word:words){
            memset(freq,0,sizeof(freq));
            for(auto c:word){
                if((c>='A' && c<='Z') || (c>='a' && c<='z')){
                    if(c>='A' && c<='Z'){
                        freq[c-'A']++;
                    }
                    else{
                        freq[c-'a']++;
                    }
                }
            }
            bool f=true;
            for(int i=0;i<26;i++){
                if(freq[i]<ara[i]){
                    f=false;
                    break;
                }
            }
            if(f){
                ans.push_back(word);
                len=min(len,(int)word.size());
            }
        }
        for(auto s:ans){
            if(s.size()==len){
                return s;
            }
        }
        return "";
    }
};
