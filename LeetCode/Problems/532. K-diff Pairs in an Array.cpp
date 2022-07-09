class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>>st;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                int diff=nums[j]-nums[i];
                if(diff==k){
                    st.insert({nums[i],nums[j]});
                }
                else if(diff>k){
                    break;
                }
            }
        }
        return st.size();
    }
};
