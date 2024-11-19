class ThroneInheritance {
public:
    unordered_map<string,vector<string>>mp;
    unordered_map<string,int>deaths;
    string king;
    vector<string>v;
    ThroneInheritance(string kingName) {
        king=kingName;
    }

    void birth(string parentName, string childName) {
        mp[parentName].push_back(childName);
    }

    void death(string name) {
        deaths[name]=1;
    }

    void dfs(vector<string> &vec,string root){
        if(deaths.find(root)==deaths.end()){
            vec.push_back(root);
        }
        for(auto it: mp[root]){
            dfs(vec,it);
        }
    }

    vector<string> getInheritanceOrder() {
        vector<string>vec;
        dfs(vec,king);
        return vec;
    }
};

