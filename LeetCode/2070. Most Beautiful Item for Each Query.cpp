class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        vector<pair<int,int>>vec;
        for(auto v:items){
            vec.push_back({v[0],v[1]});
        }
        sort(vec.begin(),vec.end());
        vector<pair<int,int>>qvec;
        for(int i=0;i<queries.size();i++){
            qvec.push_back({queries[i],i});
        }
        sort(qvec.begin(),qvec.end());
        vector<int>ans(queries.size());
        int mx=0,i=0;
        for(auto q:qvec){
            while(i<vec.size()){
                if(vec[i].first>q.first){
                    break;
                }
                else{
                    mx=max(mx,vec[i].second);
                    i++;
                }
            }
            ans[q.second]=mx;
        }
        return ans;
    }
};
