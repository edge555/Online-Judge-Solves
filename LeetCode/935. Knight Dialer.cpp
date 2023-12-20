class Solution {
public:
    int dp[5001][11];
    int MOD=1e9+7;
    bool canGo(int a,int b){
        if(a==0){
            return b==4 || b==6;
        }
        else if(a==1){
            return b==8 || b==6;
        }
        else if(a==2){
            return b==7 || b==9;
        }
        else if(a==3){
            return b==4 || b==8;
        }
        else if(a==4){
            return b==0 || b==3 || b==9;
        }
        else if(a==5){
            return false;
        }
        else if(a==6){
            return b==0 || b==1 || b==7;
        }
        else if(a==7){
            return b==2 || b==6;
        }
        else if(a==8){
            return b==1 || b==3;
        }
        else if(a==9){
            return b==2 || b==4;
        }
        else{
            return false;
        }
    }
    int func(int rem,int dig){
        if(rem<=0){
            return 1;
        }
        if(dp[rem][dig]!=-1){
            return dp[rem][dig]%MOD;
        }
        int ans=0;
        for(int i=0;i<10;i++){
            if(canGo(i,dig)){
                ans=((ans%MOD)+(func(rem-1,i)%MOD))%MOD;
            }
        }
        return dp[rem][dig]=ans%MOD;
    }
    int knightDialer(int n) {
        memset(dp,-1,sizeof(dp));
        int ans=0;
        for(int i=0;i<10;i++){
            ans=(ans%MOD+func(n-1,i)%MOD)%MOD;
        }
        return ans;
    }
};
