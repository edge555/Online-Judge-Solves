class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int>vec(n,0);
        int i=0,j=1,k;
        for(int k=0;k<n;k++){
            if(nums[k]&1){
                vec[j]=nums[k];
                j+=2;
            }
            else{
                vec[i]=nums[k];
                i+=2;
            }
        }
        return vec;
    }
};
