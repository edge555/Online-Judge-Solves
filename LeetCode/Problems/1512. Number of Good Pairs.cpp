class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i,j,n=nums.size(),cnt=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(nums[i] == nums[j] && i < j)
                    cnt++;
            }
        }
        return cnt;
    }
};
