class NumArray {
public:
    int csum[10001];
    NumArray(vector<int>& nums) {
        csum[0]=0;
        for(int i=0;i<nums.size();i++){
            csum[i+1]=csum[i]+nums[i];
        }
    }
    int sumRange(int left, int right) {
        return csum[right+1]-csum[left];
    }
};
