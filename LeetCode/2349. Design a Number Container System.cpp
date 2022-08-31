class NumberContainers {
public:
    unordered_map<int,int>mp;
    map<int,set<int>>mps;
    NumberContainers() {

    }

    void change(int index, int number) {
        if(mp.find(index)==mp.end()){
            mp[index]=number;
        }
        else{
            int num=mp[index];
            auto it=mps[num].find(index);
            mps[num].erase(it);
            mp[index]=number;
        }
        mps[number].insert(index);
    }

    int find(int number) {
        if(mps[number].empty()){
            return -1;
        }
        return *mps[number].begin();
    }
};
