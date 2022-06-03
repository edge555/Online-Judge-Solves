class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ara[3];
        memset(ara,0,sizeof(ara));
        for(auto x:nums){
            ara[x]++;
        }
        int i=0,j=0;
        for(int i=0;i<nums.size();i++){
            if(ara[j]){
                nums[i]=j;
                ara[j]--;
            }
            else{
                j++;
                i--;
            }
        }
    }
};
