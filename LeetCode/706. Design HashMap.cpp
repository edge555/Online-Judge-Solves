class MyHashMap {
public:
    int ara[1000005];
    MyHashMap() {
        for(int i=0;i<=1000000;i++){
            ara[i]=-1;
        }
    }

    void put(int key, int value) {
        ara[key]=value;
    }

    int get(int key) {
        return ara[key];
    }

    void remove(int key) {
        ara[key]=-1;
    }
};
