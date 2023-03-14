class FileSystem {
public:
    unordered_map<string,int>mp;
    FileSystem() {

    }

    bool createPath(string path, int value) {
        if(path=="" || path=="/" || mp.count(path)){
            return false;
        }
        string p="/";
        for(int i=1;i<path.size();i++){
            if(path[i]=='/'){
                if(!mp.count(p)){
                    return false;
                }
            }
            p+=path[i];
        }
        mp[p]=value;
        return true;

    }

    int get(string path) {
        if(!mp.count(path)){
            return -1;
        }
        return mp[path];
    }
};
