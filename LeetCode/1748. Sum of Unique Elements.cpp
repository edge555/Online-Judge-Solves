class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int ara[101];
        memset(ara,0,sizeof(ara));
        int i,sum=0;
        for(i=0;i<nums.size();i++){
                ara[nums[i]]++;
        }
        for(i=0;i<nums.size();i++){
            if(ara[nums[i]]==1){
                sum+=nums[i];
            }
        }
        return sum;
    }
};
