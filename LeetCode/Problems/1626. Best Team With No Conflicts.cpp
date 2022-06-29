class Solution {
public:
    int dp[1005][1005];
    static bool comp(pair<int,int>&a,pair<int,int>&b){
        if(a.first==b.first){
            return a.second<b.second;
        }
        return a.first<b.first;
    }
    int func(vector<pair<int,int>>&vec,int ind,int prev){
        if(ind==vec.size()){
            return 0;
        }
        if(dp[ind][prev]!=-1){
            return dp[ind][prev];
        }
        int ans=0;
        for(int j=ind;j<vec.size();j++){
            if(vec[prev].second<=vec[j].second){
                ans=max(ans,vec[j].second+func(vec,j+1,j));
            }
        }
        return dp[ind][prev]=ans;
    }
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int,int>>vec;
        for(int i=0;i<scores.size();i++){
            vec.push_back({ages[i],scores[i]});
        }
        sort(vec.begin(),vec.end(),comp);
        memset(dp,-1,sizeof(dp));
        int ans=0;
        for(int i=0;i<vec.size();i++){
            ans=max(ans,func(vec,i,i));
        }
        return ans;
    }
};
