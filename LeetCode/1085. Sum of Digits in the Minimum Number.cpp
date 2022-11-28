class Solution {
public:
    int sumOfDigits(vector<int>& nums) {
        int mn=INT_MAX;
        for(auto x:nums){
            mn=min(mn,x);
        }
        int sum=0;
        while(mn>0){
            sum+=mn%10;
            mn/=10;
        }
        return 1-(sum%2);
    }
};
