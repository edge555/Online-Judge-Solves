class Solution {
public:
    static bool comp(string &a,string &b){
        if(a.size()==b.size()){
            return a<b;
        }
        return a.size()>b.size();
    }
    string findLongestWord(string s, vector<string>& dictionary) {
        vector<string>vec;
        for(auto t:dictionary){
            int j=0;
            for(auto c:s){
                if(c==t[j]){
                    j++;
                }
                if(j==t.size()){
                    vec.push_back(t);
                    break;
                }
            }
        }
        if(vec.empty()){
            return "";
        }
        string ans=vec[0];
        for(auto s:vec){
            if(s.size()>ans.size()){
                ans=s;
            }
            else if(s.size()==ans.size() && s<ans){
                ans=s;
            }
        }
        return ans;
    }
};
