class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int i,j,n=accounts.size(),m=accounts[0].size(),mx=0;
        for(i=0;i<n;i++)
        {
            int sum=0;
            for(j=0;j<m;j++)
            {
                sum+=accounts[i][j];
            }
            mx=max(mx,sum);
        }
        return mx;
    }
};
