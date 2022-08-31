class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>ans;
        int n=matrix.size(),m=matrix[0].size();
        int i,j,rowmin[n+1],colmax[m+1];
        memset(rowmin,0,sizeof(rowmin));
        memset(colmax,0,sizeof(colmax));
        for(i=0;i<n;i++)
        {
            int mn=INT_MAX;
            for(j=0;j<m;j++)
                mn=min(mn,matrix[i][j]);
            rowmin[i]=mn;
        }
        for(j=0;j<m;j++)
        {
            int mx=0;
            for(i=0;i<n;i++)
                mx=max(mx,matrix[i][j]);
            colmax[j]=mx;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(matrix[i][j]==rowmin[i] && matrix[i][j]==colmax[j])
                    ans.push_back(matrix[i][j]);
            }
        }
        return ans;
    }
};
