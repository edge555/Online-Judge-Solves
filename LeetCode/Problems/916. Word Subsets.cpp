class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        unordered_map<char,int>maxfreq;
        for(auto s:words2){
            unordered_map<char,int>mp;
            for(auto c:s){
                mp[c]++;
                maxfreq[c]=max(maxfreq[c],mp[c]);
            }
        }
        vector<string>vec;
        for(auto s:words1){
            unordered_map<char,int>mp;
            for(auto c:s){
                mp[c]++;
            }
            bool f=true;
            for(char c='a';c<='z';c++){
                if(mp[c]<maxfreq[c]){
                    f=false;
                    break;
                }
            }
            if(f){
                vec.push_back(s);
            }
        }
        return vec;
    }
};
