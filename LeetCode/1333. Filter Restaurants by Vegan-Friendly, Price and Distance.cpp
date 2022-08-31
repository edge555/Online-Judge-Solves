class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b){
        if(a[1]==b[1]){
            return a[0]>b[0];
        }
        return a[1]>b[1];
    }
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        vector<vector<int>>vec;
        for(auto v:restaurants){
            if(veganFriendly && !v[2]){
                continue;
            }
            if(v[3]>maxPrice || v[4]>maxDistance){
                continue;
            }
            vec.push_back(v);
        }
        sort(vec.begin(),vec.end(),comp);
        vector<int>ans;
        for(auto v:vec){
            ans.push_back(v[0]);
        }
        return ans;
    }
};
