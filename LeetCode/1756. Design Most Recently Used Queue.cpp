class MRUQueue {
public:
    set<pair<int,int>>st;
    int ind;
    MRUQueue(int n) {
        ind=n;
        for(int i=1;i<=n;i++){
            st.insert({i,i});
        }
    }

    int fetch(int k) {
        auto it = st.begin();
        advance(it, k - 1);
        int num = it->second;
        st.erase(it);
        st.insert({++ind,num});
        return num;
    }
};
