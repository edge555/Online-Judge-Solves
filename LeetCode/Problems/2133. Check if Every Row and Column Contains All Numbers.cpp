class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        bool f=true;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            int ara[n+1];
            memset(ara,0,sizeof(ara));
            for(int j=0;j<m;j++){
                ara[matrix[i][j]]=1;
            }
            for(int i=1;i<=n;i++){
                if(ara[i]==0){
                    return false;
                }
            }
        }

        for(int i=0;i<m;i++){
            int ara[m+1];
            memset(ara,0,sizeof(ara));
            for(int j=0;j<n;j++){
                ara[matrix[j][i]]=1;
            }
            for(int i=1;i<=m;i++){
                if(ara[i]==0){
                    return false;
                }
            }
        }
        return true;
    }
};
