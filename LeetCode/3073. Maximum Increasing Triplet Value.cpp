class Solution {
public:
    int maximumTripletValue(vector<int>& nums) {
        vector<int>vec(nums.size(),0);
        set<int>st;
        st.insert(nums[0]);
        for(int i=1;i<nums.size()-1;i++){
            set<int>::iterator it=st.lower_bound(nums[i]);
            if(it!=st.begin()){
                it--;
                vec[i]=*it;
            }
            st.insert(nums[i]);
        }
        int ans=0;
        int mx=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=1;i--){
            if(mx>nums[i] && vec[i]!=0){
                ans=max(ans,mx+vec[i]-nums[i]);
            }
            mx=max(mx,nums[i]);
        }
        return ans;
    }
};
