class Solution {
public:
    static bool comp1(pair<int,int>p1, pair<int,int>p2){
        return p1.first>p2.first;
    }
    static bool comp2(pair<int,int>p1, pair<int,int>p2){
        return p1.second<p2.second;
    }
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int> >vec;
        int i;
        for(i=0;i<nums.size();i++){
            vec.push_back({nums[i],i});
        }
        sort(vec.begin(),vec.end(),comp1);
        vector<pair<int,int> >vec2;
        for(i=0;i<vec.size() && k;i++,k--){
            vec2.push_back(vec[i]);
        }
        sort(vec2.begin(),vec2.end(),comp2);
        vector<int>ans;
        for(auto x:vec2){
            ans.push_back(x.first);
        }
        return ans;
    }
};
