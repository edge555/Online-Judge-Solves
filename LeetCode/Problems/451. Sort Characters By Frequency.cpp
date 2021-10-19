class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(auto c:s){
            mp[c]++;
        }
        vector<pair<int,char> >vec;
        for(auto it:mp){
            vec.push_back({it.second,it.first});
        }
        string ans="";
        sort(vec.begin(),vec.end());
        for(int i=vec.size()-1;i>=0;i--){
            for(int j=0;j<vec[i].first;j++){
                ans+=vec[i].second;
            }
        }
        return ans;
    }
};
