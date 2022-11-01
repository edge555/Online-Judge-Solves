class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        vector<string>ans;
        unordered_map<string,int>mp;
        for(auto x:names){
            if(mp.count(x)){
                int r=mp[x];
                while(true){
                    string s=x+"("+to_string(r)+")";
                    if(!mp.count(s)){
                        mp[x]=r;
                        ans.push_back(s);
                        mp[s]=1;
                        break;
                    }
                    r++;
                }
            }
            else{
                mp[x]=1;
                ans.push_back(x);
            }
        }
        return ans;
    }
};
