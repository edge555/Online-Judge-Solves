class Solution {
public:
    int dp[51][100001][2];
    int func(int ind,int col,int cons,int n,int k){
        if(ind==n){
            return 1;
        }
        if(dp[ind][col][cons]!=-1){
            return dp[ind][col][cons];
        }
        int ans=0;
        for(int i=0;i<k;i++){
            if(i==col){
                if(cons==0){
                    ans+=func(ind+1,i,1,n,k);
                }
            }
            else{
                ans+=func(ind+1,i,0,n,k);
            }
        }
        return dp[ind][col][cons]=ans;
    }
    int numWays(int n, int k) {
        if(n==2){
            return k*k;
        }
        memset(dp,-1,sizeof(dp));
        int ans=0;
        for(int i=0;i<k;i++){
            ans+=func(1,i,0,n,k);
        }
        return ans;
    }
};
