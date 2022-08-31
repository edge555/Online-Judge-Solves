class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if(nums.size()<=2){
            return nums.size();
        }
        int x=-1,y=-1;
        int mn=INT_MAX,mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mx){
                mx=nums[i];
                x=i;
            }
            if(nums[i]<mn){
                mn=nums[i];
                y=i;
            }
        }
        if(x>y){
            swap(x,y);
        }
        vector<int>vec;
        vec.push_back(y+1);
        vec.push_back(nums.size()-x);
        vec.push_back(x+1+nums.size()-y);
        sort(vec.begin(),vec.end());
        return vec[0];
    }
};
