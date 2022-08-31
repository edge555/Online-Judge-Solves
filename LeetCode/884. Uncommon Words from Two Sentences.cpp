class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>mp,mp2;
        stringstream ss(s1);
        string s;
        while(ss>>s){
            mp[s]++;
        }
        stringstream ss2(s2);
        while(ss2>>s){
            mp2[s]++;
        }
        vector<string>ans;
        for(auto it:mp){
            if(it.second==1){
                if(mp2.find(it.first)==mp2.end()){
                    ans.push_back(it.first);
                }
            }
        }
        for(auto it:mp2){
            if(it.second==1){
                if(mp.find(it.first)==mp.end()){
                    ans.push_back(it.first);
                }
            }
        }
        return ans;
    }
};
