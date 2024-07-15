class TwoSum {

public:
    unordered_map<int,int>mp;
    TwoSum() {
        mp.clear();
    }

    void add(int number) {
        mp[number]++;
    }

    bool find(int value) {
        vector<int> twoSum;
        for(auto it: mp) {
            long long first=it.first;
            long long second=value-first;
            if((first==second && it.second>1) || (first!=second && mp.find(second)!=mp.end())) {
                return true;
            }
        }
        return false;
    }
};

/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum* obj = new TwoSum();
 * obj->add(number);
 * bool param_2 = obj->find(value);
 */
