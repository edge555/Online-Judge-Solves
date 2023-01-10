class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int mn=1e4,mx=-1e4,ans=0;
        for(auto v:arrays){
            ans=max(ans,max(v.back()-mn,mx-v.front()));
            mx=max(mx,v.back());
            mn=min(mn,v.front());
        }
        return ans;
    }
};
