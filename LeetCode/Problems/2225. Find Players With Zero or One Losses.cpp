class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>win,loss;
        unordered_set<int>all;
        for(auto vec:matches){
            win[vec[0]]++;
            loss[vec[1]]++;
            all.insert(vec[0]);
            all.insert(vec[1]);
        }
        vector<vector<int> >ans;
        vector<int>temp;
        for(auto it=all.begin();it!=all.end();it++){
            int p=*it;
            if(loss[p]==0){
                temp.push_back(p);
            }
        }
        sort(temp.begin(),temp.end());
        ans.push_back(temp);
        temp.clear();
        for(auto it:loss){
            if(it.second==1){
                temp.push_back(it.first);
            }
        }
        ans.push_back(temp);
        return ans;
    }
};
