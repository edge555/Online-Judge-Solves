class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,n=nums.size(),k;
        unordered_map<int,int>ara;
        for(i=0;i<n;i++)
            ara[nums[i]]++;
        for(i=0;i<n;i++)
        {
            k=nums[i];
            if(ara[k]==1)
                return k;
        }
        return -1;
    }
};
