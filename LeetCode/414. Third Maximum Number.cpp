class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int>st;
        int i,cnt=3;
        vector<int>vec;
        for(i=nums.size()-1;i>=0;i--)
        {
            if(st.find(nums[i])==st.end())
            {
                cnt--;
                vec.push_back(nums[i]);
                st.insert(nums[i]);
            }
            if(!cnt)
                break;
        }
        sort(vec.begin(),vec.end());
        if(vec.size()==3)
            return vec[0];
        else
            return vec[vec.size()-1];
    }
};
