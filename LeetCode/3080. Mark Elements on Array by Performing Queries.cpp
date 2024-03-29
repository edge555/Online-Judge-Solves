class Solution {
public:
    static bool comp(pair<int,int>&p1, pair<int,int>&p2){
        if(p1.first==p2.first){
            return p1.second<p2.second;
        }
        return p1.first<p2.first;
    }
    vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<pair<int,int>>vec;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            vec.push_back({nums[i],i});
        }
        sort(vec.begin(),vec.end(),comp);
        unordered_map<int,int>marked;
        int ind=0;
        vector<long long>ans;
        for(auto v:queries){
            int markind=v[0],k=v[1];
            if(!marked.count(markind)){
                marked[markind]++;
                sum-=nums[markind];
            }
            bool f=true;
            for(int i=0;k>0;i++){
                if(ind>=vec.size()){
                    f=false;
                    break;
                }
                if(!marked.count(vec[ind].second)){
                    k--;
                    sum-=vec[ind].first;
                    marked[vec[ind].second]++;
                }
                ind++;
            }
            ans.push_back(f?sum:0);
        }
        return ans;
    }
};
