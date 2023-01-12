class Solution {
public:
    string process(string a){
        while(a[0]!='a'){
            for(int i=0;i<a.size();i++){
                if(a[i]=='a'){
                    a[i]='z';
                }
                else{
                    a[i]--;
                }
            }
        }
        return a;
    }
    vector<vector<string>> groupStrings(vector<string>& strings) {
        vector<vector<string>>vec;
        map<string,vector<string>>mp;
        for(auto s:strings){
            string p=process(s);
            mp[p].push_back(s);
        }
        for(auto it:mp){
            vec.push_back(it.second);
        }
        return vec;
    }
};
