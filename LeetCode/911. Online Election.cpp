class TopVotedCandidate {
    public:
        vector<pair<int,int>>time;
        unordered_map<int,int>vote;
        TopVotedCandidate(vector<int>& persons, vector<int>& times) {
            int mx=0;
            int win=-1;
            for(int i=0;i<persons.size();i++){
                int p=persons[i];
                vote[p]++;
                if(vote[p]>=mx){
                    mx=vote[p];
                    win=p;
                }
                time.push_back({times[i],win});
            }
        }
        
        int q(int t) {
            auto it=lower_bound(time.begin(),time.end(),make_pair(t,INT_MIN));
            if(it==time.end() || it->first!=t){
                it--;
            }
            return it->second;
        }
    };