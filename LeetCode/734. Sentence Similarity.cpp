class Solution {
public:
    bool areSentencesSimilar(vector<string>& sentence1, vector<string>& sentence2, vector<vector<string>>& similarPairs) {
        if(sentence1.size()!=sentence2.size()){
            return false;
        }
        int ind=1;
        set<pair<string,string>>s;
        for(auto v:similarPairs){
            string a=v[0],b=v[1];
            s.insert({a,b});
            s.insert({b,a});
        }
        vector<int>vec,vec2;
        for(int i=0;i<sentence1.size();i++){
            string a=sentence1[i],b=sentence2[i];
            if(a!=b){
                if(s.find({a,b})!=s.end() || s.find({b,a})!=s.end()){
                    continue;
                }
                return false;
            }
        }
        return true;
    }
};
