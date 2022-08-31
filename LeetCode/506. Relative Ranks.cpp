class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>vec;
        for(auto x:score){
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end(),greater<int>());
        unordered_map<int,int>mp;
        for(int i=0;i<vec.size();i++){
            mp[vec[i]]=i;
        }
        vector<string>ans;
        for(auto x:score){
            if(mp[x]==0){
                ans.push_back("Gold Medal");
            }
            else if(mp[x]==1){
                ans.push_back("Silver Medal");
            }
            else if(mp[x]==2){
               ans.push_back("Bronze Medal");
            }
            else{
                ans.push_back(to_string(mp[x]+1));
            }
        }
        return ans;
    }
};
