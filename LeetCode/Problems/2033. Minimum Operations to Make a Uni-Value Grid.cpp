class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        map<int,int>mp;
        int mod=-1,sum=0,tot=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                tot++;
                mp[grid[i][j]]++;
                sum+=grid[i][j];
                if(mod==-1){
                    mod=grid[i][j]%x;
                }
                else{
                    if(grid[i][j]%x!=mod){
                        return -1;
                    }
                }
            }
        }
        int ans=INT_MAX,lastcnt=0,lastsum=0;
        for(auto it:mp){
            int leftsum=(lastcnt*it.first)-lastsum;
            int rightcnt=tot-(lastcnt+it.second);
            int rightAllowedSum=rightcnt*it.first;
            int rightCurSum=sum-(lastsum+(it.first*it.second));
            int rightsum=rightCurSum-rightAllowedSum;
            ans=min(ans,leftsum+rightsum);
            lastcnt+=it.second;
            lastsum+=(it.first*it.second);
        }
        return ans/x;
    }
};
