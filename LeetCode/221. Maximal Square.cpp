class Solution {
public:
    bool possible(int &mid,vector<vector<int>>& vec,int &n,int &m){
        for(int i=0;i<=n-mid;i++){
            for(int j=0;j<=m-mid;j++){
                int mn=INT_MAX;
                for(int k=i;k<i+mid;k++){
                    int sum=0;
                    if(j==0){
                        sum=vec[k][j+mid-1];
                    }
                    else{
                        sum=vec[k][j+mid-1]-vec[k][j-1];
                    }
                    mn=min(mn,sum);
                }
                if(mn>=mid){
                    return true;
                }
            }
        }
        return false;
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<vector<int>>vec(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1'){
                    vec[i][j]=1;
                }
            }
        }
        vector<vector<int>>sum(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<m;j++){
                if(vec[i][j]==0){
                    cnt=0;
                }
                else{
                    cnt++;
                }
                sum[i][j]=cnt;
            }
        }

        int lo=1,hi=min(n,m),ans=0;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(mid,sum,n,m)){
                lo=mid+1;
                ans=max(ans,mid);
            }
            else{
                hi=mid-1;
            }
        }
        return ans*ans;
    }
};
