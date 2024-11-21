class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1;
        vector<double> vec;
        while (l<r){
            double avg=(nums[l]+nums[r])/2.0;
            vec.push_back(avg);
            l++;
            r--;
        }
        sort(vec.begin(),vec.end());
        return vec[0];
    }
};
