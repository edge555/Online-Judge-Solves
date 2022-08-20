class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int last=prices[0],ans=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>last){
                ans+=prices[i]-last;
            }
            last=prices[i];
        }
        return ans;
    }
};
