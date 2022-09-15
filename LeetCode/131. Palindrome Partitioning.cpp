class Solution {
public:
    vector<vector<string>>ans;
    bool isPali(string &s){
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-1-i]){
                return false;
            }
        }
        return true;
    }
    bool check(vector<string>&v){
        for(auto s:v){
            if(!isPali(s) || s==""){
                return false;
            }
        }
        return true;
    }
    void func(int i,string &s,vector<string>vec){
        if(i==s.size()){
            if(check(vec)){
                ans.push_back(vec);
            }
            return;
        }
        vec[vec.size()-1]+=s[i];
        func(i+1,s,vec);
        vec[vec.size()-1].pop_back();
        string t="";
        t+=s[i];
        vec.push_back(t);
        func(i+1,s,vec);
        vec.pop_back();
    }
    vector<vector<string>> partition(string s) {
        vector<string>vec={""};
        func(0,s,vec);
        return ans;
    }
};
