class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int ans=0;
        for(int i=0;i<nums1.size();i++){
            int ind = upper_bound(nums2.begin(),nums2.end(),nums1[i],greater<int>())-nums2.begin();
            ans=max(ans,ind-i-1);
        }
        return ans;
    }
};
