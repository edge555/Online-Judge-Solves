class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
        unordered_map<string,int>mp;
        for(int i=0;i<word.size();i+=k){
            string s=word.substr(i,k);
            mp[s]++;
        }
        int mx=0;
        for(auto it:mp){
            mx=max(mx,it.second);
        }
        return (word.size()-(mx*k))/k;
    }
};
