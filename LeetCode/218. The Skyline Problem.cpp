class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<pair<int,int>>vec;
        for(auto x:buildings){
            vec.push_back({x[0],-x[2]});
            vec.push_back({x[1],x[2]});
        }
        sort(vec.begin(),vec.end());
        int prev=0,cur=0;
        multiset<int>m;
        vector<vector<int>>ans;
        m.insert(0);
        for(auto i:vec){
            if(i.second<0){
                m.insert(-i.second);
            }
            else{
                m.erase(m.find(i.second));
            }
            cur=*m.rbegin();
            if (cur!=prev){
                ans.push_back({i.first, cur});
                prev=cur;
            }
        }
        return ans;
    }
};
