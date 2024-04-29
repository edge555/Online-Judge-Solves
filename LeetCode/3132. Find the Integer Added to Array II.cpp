class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        int ans=INT_MAX;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums1.size();j++){
                if(i==j){
                    continue;
                }
                int diff=INT_MAX,p=0;
                bool f=true;
                for(int k=0;k<nums1.size();k++){
                    if(k==i || k==j){
                        continue;
                    }
                    if(diff==INT_MAX){
                        diff=nums2[p]-nums1[k];
                    }
                    else{
                        if(nums2[p]-nums1[k]!=diff){
                            f=false;
                            break;
                        }
                    }
                    p++;
                }
                if(f){
                    ans=min(ans,diff);
                }
            }
        }
        return ans;
    }
};
