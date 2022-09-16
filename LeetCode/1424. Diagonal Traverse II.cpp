class Solution {
public:
    static bool comp(pair<int,int>&a,pair<int,int>&b){
        if(a.first+a.second==b.first+b.second){
            return a.first>b.first;
        }
        return a.first+a.second<b.first+b.second;
    }
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<pair<int,int>>vec;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                vec.push_back({i,j});
            }
        }
        sort(vec.begin(),vec.end(),comp);
        vector<int>ans;
        for(auto p:vec){
            ans.push_back(nums[p.first][p.second]);
        }
        return ans;
    }
};
