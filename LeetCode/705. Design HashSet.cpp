class MyHashSet {
public:
    int ara[1000005];
    MyHashSet() {
        for(int i=0;i<=1000000;i++){
            ara[i]=0;
        }
    }

    void add(int key) {
        ara[key]=1;
    }

    void remove(int key) {
        ara[key]=0;
    }

    bool contains(int key) {
        return ara[key];
    }
};
