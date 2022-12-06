class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        int mx=-1,mn=1e9;
        for(auto x:nums){
            mx=max(mx,x);
            mn=min(mn,x);
        }
        int mxind=-1,mnind=-1;;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==mx){
                mxind=i;
                break;
            }
        }
        int cnt=0;
        while(mxind!=nums.size()-1){
            swap(nums[mxind],nums[mxind+1]);
            mxind++;
            cnt++;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==mn){
                break;
            }
            cnt++;
        }
        return cnt;
    }
};
