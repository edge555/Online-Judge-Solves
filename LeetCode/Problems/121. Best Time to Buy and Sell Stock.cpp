class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0,mn=prices[0];
        for(int i=1;i<prices.size();i++){
            if(mn<prices[i]){
                int r=prices[i]-mn;
                ans=max(ans,r);
            }
            mn=min(mn,prices[i]);
        }
        return ans;
    }
};
