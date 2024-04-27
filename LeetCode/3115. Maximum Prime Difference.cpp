class Solution {
public:
    bool isPrime(int n){
        if(n==2){
            return true;
        }
        if(n<=1 || n%2==0){
            return false;
        }
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int l=-1,r=-1;
        for(int i=0;i<nums.size();i++){
            if(isPrime(nums[i])){
                if(l==-1){
                    l=i;
                }
                r=i;
            }
        }
        return r-l;
    }
};
