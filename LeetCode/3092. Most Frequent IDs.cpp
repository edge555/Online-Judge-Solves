class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
        set<pair<long long,int>>st;
        unordered_map<int,long long>mp;
        vector<long long>vec;
        for(int i=0;i<nums.size();i++){
            int x=nums[i],f=-freq[i];
            if(!mp.count(x)){
                st.insert({f,x});
                mp[x]=f;
            }
            else{
                st.erase(st.find({mp[x],x}));
                st.insert({mp[x]+f,x});
                mp[x]+=f;
            }
            if(st.empty()){
                vec.push_back(0);
            }
            else{
                vec.push_back(-st.begin()->first);
            }
        }
        return vec;
    }
};
