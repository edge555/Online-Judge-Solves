class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size(),len=0,ans=0;
        while(1)
        {
            int i=0,j=len;
            if(j>=n){
                break;
            }
            int sum=0;
            for(int k=0;k<=len;k++){
                sum+=arr[k];
            }
            ans+=sum;
            while(1){
                i++;
                j++;
                if(j>=n){
                    break;
                }
                sum-=arr[i-1];
                sum+=arr[j];
                ans+=sum;
            }
            len+=2;
        }
        return ans;
    }
};
