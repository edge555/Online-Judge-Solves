class Solution {
public:
    static bool comp(pair<string,int>a,pair<string,int>b){
        if(a.first.size()==b.first.size()){
            return a.second<b.second;
        }
        return a.first.size()<b.first.size();
    }
    string arrangeWords(string text) {
        text[0]+=32;
        vector<pair<string,int>>vec;
        stringstream ss(text);
        string s;
        int i=0;
        while(ss>>s){
            vec.push_back({s,i++});
        }
        sort(vec.begin(),vec.end(),comp);
        string ans="";
        for(auto p:vec){
            ans+=p.first;
            ans+=" ";
        }
        ans.pop_back();
        ans[0]-=32;
        return ans;
    }
};
