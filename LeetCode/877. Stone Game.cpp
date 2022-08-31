class Solution {
public:
    int dp[501][501][2];
    int func(int i,int j,int f,int alice,int bob,int sum,vector<int>&piles){
        if(i>=j){
            return alice>bob;
        }
        if(alice>sum){
            return 1;
        }
        if(bob>sum){
            return 0;
        }
        if(dp[i][j][f]!=-1){
            return dp[i][j][f];
        }
        int first=0,second=0;
        if(f==0){
            first=func(i+1,j,1,alice+piles[i],bob,sum,piles) || func(i,j-1,f,alice+piles[j],bob,sum,piles);
        }
        else{
            second=func(i+1,j,1,alice,bob+piles[i],sum,piles) || func(i,j-1,f,alice,bob+piles[j],sum,piles);
        }
        return dp[i][j][f]=first || second;
    }
    bool stoneGame(vector<int>& piles) {
        memset(dp,-1,sizeof(dp));
        int sum=0;
        for(auto x:piles){
            sum+=x;
        }
        return func(0,piles.size()-1,0,0,0,sum/2,piles);
    }
};
