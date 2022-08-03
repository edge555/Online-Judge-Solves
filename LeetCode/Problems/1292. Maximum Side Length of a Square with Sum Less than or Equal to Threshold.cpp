class Solution {
public:
    bool possible(vector<vector<int>>&pref,int mid,int k,int n,int m){
        for(int i=0;i<=n-mid;i++){
            for(int j=0;j<=m-mid;j++){
                int sum=0;
                for(int p=i;p<=i+mid-1;p++){
                    if(j==0){
                        sum+=pref[p][j+mid-1];
                    }
                    else{
                        sum+=pref[p][j+mid-1]-pref[p][j-1];
                    }
                }
                if(sum<=k){
                    return true;
                }
            }
        }
        return false;
    }
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>>pref(n+1,vector<int>(m+1,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0){
                    pref[i][j]=mat[i][j];
                }
                else{
                    pref[i][j]=pref[i][j-1]+mat[i][j];
                }
            }
        }
        int lo=0,hi=min(n,m),ans=0;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(pref,mid,threshold,n,m)){
                ans=max(ans,mid);
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return ans;
    }
};
