class Solution {
public:
    int process(string s){
        int r=0;
        if(s[0]!='0'){
            r+=(s[0]-'0')*600;
        }
        r+=(s[1]-'0')*60;
        string x="";
        x+=s[2];
        x+=s[3];
        r+=stoi(x);
        return r;
    }
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        map<string,vector<int>>mp;
        for(auto v:access_times){
            mp[v[0]].push_back(process(v[1]));
        }
        vector<string>ans;
        for(auto it:mp){
            if(it.second.size()<=2){
                continue;
            }
            sort(it.second.begin(),it.second.end());
            for(int i=2;i<it.second.size();i++){
                if(it.second[i]-it.second[i-2]<60){
                    ans.push_back(it.first);
                    break;
                }
            }
        }
        return ans;
    }
};
