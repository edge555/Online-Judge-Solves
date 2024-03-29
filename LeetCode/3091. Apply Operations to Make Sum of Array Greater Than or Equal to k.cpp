class Solution {
public:
    int minOperations(int k) {
        if(k<=3){
            return k-1;
        }
        int ans=k;
        for(int i=2;i<=k/2;i++){
            int sum=i-1;
            int p=k-i;
            sum+=(p/i)+(p%i!=0);
            ans=min(ans,sum);
        }
        return ans;
    }
};
