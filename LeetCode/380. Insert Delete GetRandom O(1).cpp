class RandomizedSet {
    public:
        vector<int>vec;
        unordered_map<int,int>mp;
        RandomizedSet() {
            
        }
        
        bool insert(int val) {
            if(mp.count(val)){
                return false;
            }
            vec.push_back(val);
            mp[val]=vec.size()-1;
            return true;
        }
        
        bool remove(int val) {
            if(!mp.count(val)){
                return false;
            }
            auto it=mp.find(val);
            int x=it->second;
            vec[x]=vec[vec.size()-1];
            vec.pop_back();
            mp[vec[x]]=x;
            mp.erase(mp.find(val));
            return true;
        }
        
        int getRandom() {
            return vec[rand()%vec.size()];
        }
    };