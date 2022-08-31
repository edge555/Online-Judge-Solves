class Solution {
public:
    static bool comp(pair<int,int>p,pair<int,int>q){
        return p.second<q.second;
    }
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        vector<pair<int,int>>vec;
        queue<int>q;
        for(int i=0;i<deck.size();i++){
            q.push(i);
        }
        int time=0;
        while(!q.empty()){
            vec.push_back({q.front(),time++});
            q.pop();
            if(q.empty()){
                break;
            }
            q.push(q.front());
            q.pop();
        }
        sort(vec.begin(),vec.end(),comp);
        sort(deck.begin(),deck.end());
        vector<int>ans(deck.size(),0);
        for(int i=0;i<vec.size();i++){
            int ind=vec[i].first;
            ans[ind]=deck[i];
        }
        return ans;
    }
};
