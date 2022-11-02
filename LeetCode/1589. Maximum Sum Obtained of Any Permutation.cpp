class Solution {
public:
    static bool comp(pair<int,int>&a,pair<int,int>&b){
        return a.first>b.first;
    }
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
        int n=nums.size(),mod=1e9+7;
        vector<int>freq(n+5,0);
        freq[n+1]=0;
        for(auto v:requests){
            int l=v[0],r=v[1];
            freq[l]++;
            freq[r+1]--;
        }
        for(int i=1;i<=n;i++){
            freq[i]+=freq[i-1];
        }
        vector<pair<int,int>>pv;
        for(int i=0;i<n;i++){
            pv.push_back({freq[i],i});
        }
        sort(pv.begin(),pv.end(),comp);
        sort(nums.begin(),nums.end(),greater<int>());
        vector<int>vec(n,0);
        for(int i=0;i<n;i++){
            vec[pv[i].second]=nums[i];
        }
        vector<int>csum(n,0);
        for(int i=0;i<n;i++){
            if(i==0){
                csum[i]=vec[i];
            }
            else{
                csum[i]=csum[i-1]+vec[i];
            }
        }
        long long sum=0;
        for(auto v:requests){
            int l=v[0],r=v[1],p=0;
            if(l==0){
                p=csum[r];
            }
            else{
                p=csum[r]-csum[l-1];
            }
            sum=((sum%mod)+(p%mod))%mod;
        }
        return sum;
    }
};
