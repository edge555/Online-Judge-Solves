class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
        int tot=(n+m)*mean;
        int sum=0;
        for(auto x:rolls){
            sum+=x;
        }
        int rem=tot-sum;
        vector<int>ans;
        if(n*6<rem || rem<1 || n>rem){
            return ans;
        }
        int p=rem/n;
        int r=rem%n;
        for(int i=0;i<n;i++){
            ans.push_back(p);
        }
        for(int i=0;i<r;i++){
            ans[i]++;
        }
        return ans;
    }
};
