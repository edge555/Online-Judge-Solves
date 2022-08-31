class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int sum=0,r=tickets[k];
        for(int i=0;i<tickets.size();i++){
            sum+=min(r-1,tickets[i]);
        }
        for(int i=0;i<=k;i++){
            if(tickets[i]>=r){
                sum++;
            }
        }
        return sum;
    }
};
