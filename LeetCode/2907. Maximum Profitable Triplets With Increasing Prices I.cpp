class Solution {
public:
    int maxright[2001],maxleft[2001];
    int maxProfit(vector<int>& prices, vector<int>& profits) {
        int n=prices.size();
        for(int i=0;i<n;i++){
            int j=i-1,mx=0;
            while(j>=0){
                if(prices[i]>prices[j]){
                    mx=max(mx,profits[j]);
                }
                j--;
            }
            maxleft[i]=mx;
        }
        for(int i=0;i<n;i++){
            int j=i+1,mx=0;
            while(j<n){
                if(prices[i]<prices[j]){
                    mx=max(mx,profits[j]);
                }
                j++;
            }
            maxright[i]=mx;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(!maxright[i] || !maxleft[i]){
                continue;
            }
            ans=max(ans,profits[i]+maxright[i]+maxleft[i]);
        }
        return !ans?-1:ans;
    }
};
