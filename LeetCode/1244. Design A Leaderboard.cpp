class Leaderboard {
public:
    set<pair<int,int>>st;
    unordered_map<int,int>mp;
    Leaderboard() {

    }

    void addScore(int playerId, int score) {
        if(mp.count(playerId)){
            int r=mp[playerId];
            auto it=st.find({r,playerId});
            st.erase(it);
            st.insert({r+score,playerId});
            mp[playerId]+=score;
        }
        else{
            st.insert({score,playerId});
            mp[playerId]=score;
        }
    }

    int top(int K) {
        auto it = st.rbegin();
        int sum=0;
        while(K--){
            sum+=it->first;
            it++;
        }
        return sum;
    }

    void reset(int playerId) {
        int r=mp[playerId];
        mp.erase(mp.find(playerId));
        auto it=st.find({r,playerId});
        st.erase(it);
    }
};
