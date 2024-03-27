class Solution {
public:
    vector<long long> maximumCoins(vector<int>& heroes, vector<int>& monsters, vector<int>& coins) {
        vector<pair<long long,long long>>vec;
        for(int i=0;i<coins.size();i++){
            vec.push_back({monsters[i],coins[i]});
        }
        sort(vec.begin(),vec.end());
        vector<pair<int,long long>>csum;
        long long sum=vec[0].second;
        for(int i=1;i<vec.size();i++){
            sum+=vec[i].second;
            if(vec[i].first!=vec[i-1].first){
                csum.push_back({vec[i-1].first,(long long)sum-vec[i].second});
            }
        }
        csum.push_back({vec[vec.size()-1].first,(long long)sum});
        vector<pair<int,int>>ind;
        for(int i=0;i<heroes.size();i++){
            ind.push_back({heroes[i],i});
        }
        sort(ind.begin(),ind.end());
        vector<long long>ans(heroes.size(),0);
        unordered_map<int,long long>mp;
        int i=0,j=0;
        while(i<ind.size()){
            if(mp.count(ind[i].first)){
                ans[ind[i].second]=mp[ind[i].first];
                i++;
                continue;
            }
            int cnt=0;
            while(j<csum.size() && csum[j].first<=ind[i].first){
                j++;
                cnt++;
            }
            if(cnt){
                j--;
                ans[ind[i].second]=csum[j].second;
                mp[ind[i].first]=csum[j].second;
            }
            else{
                ans[ind[i].second]=0;
                mp[ind[i].first]=0;
            }
            i++;
        }
        return ans;
    }
};
