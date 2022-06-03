class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int ara[50001][2];
        memset(ara,-1,sizeof(ara));
        unordered_map<int,int>mp;
        int mx=-1;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            mp[x]++;
            mx=max(mx,mp[x]);
            if(ara[x][0]==-1){
                ara[x][0]=i;
            }
            ara[x][1]=i;
        }
        int ans=INT_MAX;
        for(int i=0;i<=49999;i++){
            if(mp[i]==mx){
                ans=min(ans,ara[i][1]-ara[i][0]);
            }
        }
        return ans+1;
    }
};
