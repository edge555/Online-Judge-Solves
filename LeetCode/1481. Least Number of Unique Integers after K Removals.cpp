class Solution {
public:
    static bool comp(pair<int,int> a,pair<int,int> b){
        return a.second<b.second;
    }
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        vector<pair<int,int> >vec;
        unordered_map<int,int>mp;
        for(auto x:arr){
            mp[x]++;
        }
        for(auto it:mp){
            vec.push_back({it.first,it.second});
        }
        sort(vec.begin(),vec.end(),comp);
        int cnt=vec.size();
        for(int i=0;i<vec.size();i++){
            if(vec[i].second<=k){
                k-=vec[i].second;
                cnt--;
            }
            else{
                break;
            }
        }
        return cnt;
    }
};
