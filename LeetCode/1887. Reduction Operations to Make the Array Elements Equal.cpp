class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        vector<pair<int,int>>vec;
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto it:mp){
            vec.push_back({it.first,it.second});
        }
        if(vec.size()==1){
            return 0;
        }
        int cnt=0;
        sort(vec.begin(),vec.end());
        for(int i=vec.size()-1;i>=1;i--){
            cnt+=vec[i].second;
            vec[i-1].second+=vec[i].second;
        }
        return cnt;
    }
};
