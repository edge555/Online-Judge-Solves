class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n=rowSum.size(),m=colSum.size();
        vector<vector<int>>vec(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int mn=min(rowSum[i],colSum[j]);
                rowSum[i]-=mn;
                colSum[j]-=mn;
                vec[i][j]=mn;
            }
        }
         return vec;
    }
};
