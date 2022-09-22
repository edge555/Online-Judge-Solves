class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string,vector<string>>mp;
        for(auto path:paths){
            stringstream ss(path);
            string dir,file;
            getline(ss,dir,' ');
            while(getline(ss,file,' ')){
                string content=file.substr(file.find('(')+1,file.find(')')-file.find('(')-1);
                string name=dir+'/'+file.substr(0,file.find('('));
                mp[content].push_back(name);
            }
        }
        vector<vector<string>> res;
        for(auto it:mp){
            if(it.second.size()>1){
                res.push_back(it.second);
            }
        }
        return res;
    }
};
