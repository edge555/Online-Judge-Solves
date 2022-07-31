class MyCalendar {
public:
    set<pair<int,int>>st;
    MyCalendar() {
        st.clear();
    }

    bool book(int start, int end) {
        if(st.empty()){
            st.insert({start,end});
            return true;
        }
        else{
            for(auto p:st){
                if((start<=p.first and end>p.first) || (start>=p.first and start<p.second)){
                    return false;
                }
            }
            st.insert({start,end});
            return true;
        }
        return false;
    }
};
