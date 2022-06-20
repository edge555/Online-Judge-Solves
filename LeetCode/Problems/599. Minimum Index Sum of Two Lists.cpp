class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>freq,ind1,ind2;
        for(int i=0;i<list1.size();i++){
            freq[list1[i]]++;
            ind1[list1[i]]=i;
        }
        for(int i=0;i<list2.size();i++){
            freq[list2[i]]++;
            ind2[list2[i]]=i;
        }
        vector<pair<int,string>>vec;
        int r=INT_MAX;
        for(auto it:freq){
            if(it.second==2){
                r=min(r,ind1[it.first]+ind2[it.first]);
                vec.push_back({ind1[it.first]+ind2[it.first],it.first});
            }
        }
        vector<string>ans;
        for(auto p:vec){
            if(p.first==r){
                ans.push_back(p.second);
            }
        }
        return ans;
    }
};
