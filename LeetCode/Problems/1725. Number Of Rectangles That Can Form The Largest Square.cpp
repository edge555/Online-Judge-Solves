class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        unordered_map<int,int>mp;
        for(auto v:rectangles){
            mp[min(v[0],v[1])]++;
        }
        int mx=-1,ans=-1;
        for(auto it:mp){
            if(it.first>mx){
                mx=it.first;
                ans=it.second;
            }
        }
        return ans;
    }
};
