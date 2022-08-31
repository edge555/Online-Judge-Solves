class Solution {
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        vector<vector<int>>vec(n,vector<int>(n,1));
        for(auto v:mines){
            vec[v[0]][v[1]]=0;
        }
        vector<vector<int>>left(n,vector<int>(n,0));
        vector<vector<int>>right(n,vector<int>(n,0));
        vector<vector<int>>up(n,vector<int>(n,0));
        vector<vector<int>>down(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(vec[i][j]==0){
                    cnt=0;
                }
                else{
                    cnt++;
                }
                left[i][j]=cnt;
            }
        }
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=n-1;j>=0;j--){
                if(vec[i][j]==0){
                    cnt=0;
                }
                else{
                    cnt++;
                }
                right[i][j]=cnt;
            }
        }
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(vec[j][i]==0){
                    cnt=0;
                }
                else{
                    cnt++;
                }
                up[j][i]=cnt;
            }
        }
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=n-1;j>=0;j--){
                if(vec[j][i]==0){
                    cnt=0;
                }
                else{
                    cnt++;
                }
                down[j][i]=cnt;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(vec[i][j]==0){
                    continue;
                }
                int r=min(left[i][j],min(right[i][j],min(up[i][j],down[i][j])));
                ans=max(ans,r);
            }
        }
        return ans;
    }
};
