class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>vec=nums;
        sort(vec.begin(),vec.end());
        int cnt=0;
        int st=0,en=nums.size()-1;
        while(st<nums.size()){
            if(nums[st]==vec[st]){
                st++;
            }
            else{
                break;
            }
        }
        while(en>=0){
            if(nums[en]==vec[en]){
                en--;
            }
            else{
                break;
            }
        }
        if(st>=en){
            return 0;
        }
        return en-st+1;
    }
};
