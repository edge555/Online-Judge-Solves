class Solution {
public:
    int ara[11][11];
    long long sumDigitDifferences(vector<int>& nums) {
        int dig=log10(nums[0])+1;
        for(int i=0;i<nums.size();i++){
            int x=nums[i],j=0;
            while(x>0){
                ara[dig-j-1][x%10]++;
                x/=10;
                j++;
            }
        }
        long long ans=0;
        for(int i=0;i<dig;i++){
            for(int j=0;j<10;j++){
                long long x=0,y=0;
                for(int k=0;k<10;k++){
                    if(k==j){
                        x+=ara[i][k];
                    }
                    else{
                        y+=ara[i][k];
                    }
                }
                ans+=x*y;
            }
        }
        return ans/2;
    }
};
