class Solution {
public:
    static bool comp(pair<int,string> &p1, pair<int,string> &p2){
        if(p1.first==p2.first){
            return p1.second<p2.second;
        }
        return p1.first>p2.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        for(auto s:words){
            mp[s]++;
        }
        vector<pair<int,string>> vec;
        for(auto it:mp){
            vec.push_back({it.second,it.first});
        }
        sort(vec.begin(),vec.end(),comp);
        vector<string>ans;
        for(int i=0;i<k;i++){
            ans.push_back(vec[i].second);
        }
        return ans;
    }
};
