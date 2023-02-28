class Solution {
public:
    int dp[105][1005][6];
    int func(int ind,int rem,int coup,vector<int>& price, vector<int>& tastiness){
        if(ind==price.size()){
            return 0;
        }
        if(dp[ind][rem][coup]!=-1){
            return dp[ind][rem][coup];
        }
        int ans=0,ans2=0,ans3=0;
        if(rem-price[ind]>=0){
            ans=tastiness[ind]+func(ind+1,rem-price[ind],coup,price,tastiness);
        }
        if(coup>0 && rem-(price[ind]/2)>=0){
            ans2=tastiness[ind]+func(ind+1,rem-(price[ind]/2),coup-1,price,tastiness);
        }
        ans3=func(ind+1,rem,coup,price,tastiness);
        return dp[ind][rem][coup]=max(ans,max(ans2,ans3));
    }
    int maxTastiness(vector<int>& price, vector<int>& tastiness, int maxAmount, int maxCoupons) {
        memset(dp,-1,sizeof(dp));
        return func(0,maxAmount,maxCoupons,price,tastiness);
    }
};
