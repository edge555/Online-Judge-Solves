class WordDistance {
public:
    unordered_map<string,vector<int>>mp;
    WordDistance(vector<string>& wordsDict) {
        for(int i=0;i<wordsDict.size();i++){
            mp[wordsDict[i]].push_back(i);
        }
    }

    int shortest(string word1, string word2) {
        int ans=1e9;
        int l=0,r=0;
        while(l<mp[word1].size() && r<mp[word2].size()){
            ans=min(ans,abs(mp[word1][l]-mp[word2][r]));
            if(mp[word1][l]<=mp[word2][r]){
                l++;
            }
            else{
                r++;
            }
        }
        return ans;
    }
};
