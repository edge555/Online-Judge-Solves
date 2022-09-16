class StockPrice {
public:
    map<int,int>mp;
    multiset<int>ms;
    StockPrice() {

    }
    void update(int timestamp, int price) {
        if(mp.find(timestamp)!=mp.end()){
            int prev=mp[timestamp];
            ms.erase(ms.lower_bound(prev));
            mp[timestamp]=price;
        }
        else{
            mp[timestamp]=price;
        }
        ms.insert(price);
    }

    int current() {
        auto it=mp.rbegin();
        return it->second;
    }

    int maximum() {
        return *ms.rbegin();
    }

    int minimum() {
        return *ms.begin();
    }
};
