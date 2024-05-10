class Solution {
public:
    bool isInsideY(int x,int y,int mid){
        if(x>=mid){
            return y==mid;
        }
        int p=mid-x,q=mid-y;
        if(p==q && p>0){
            return true;
        }
        else if(x+y==mid*2){
            return true;
        }
        return false;
    }
    int func(int yVal,int otherVal,vector<vector<int>>&grid){
        int cnt=0,n=grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isInsideY(i,j,n/2)){
                    cnt+=grid[i][j]!=yVal;
                }
                else{
                    cnt+=grid[i][j]!=otherVal;
                }
            }
        }
        return cnt;
    }
    int minimumOperationsToWriteY(vector<vector<int>>& grid) {
        vector<pair<int, int>> vec = {
            {0, 1}, {0, 2},
            {1, 0}, {1, 2},
            {2, 0}, {2, 1}
        };
        int ans=1e9;
        for(auto v:vec){
            ans=min(ans,func(v.first,v.second,grid));
        }
        return ans;
    }
};
