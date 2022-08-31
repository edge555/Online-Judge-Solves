class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1.size(),0);
        multiset<int>ms;
        for(auto x:nums1){
            ms.insert(x);
        }
        for(int i=0;i<nums2.size();i++){
            auto it=ms.upper_bound(nums2[i]);
            if(it==ms.end()){
                it=ms.begin();
            }
            ans[i]=*it;
            ms.erase(it);
        }
        return ans;
    }
};
