class Solution {
public:
    static bool comp(pair<int,int>a,pair<int,int>b){
        if(a.first==b.first){
            a.second<b.second;
        }
        return a.first>b.first;
    }
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        vector<pair<int,int>>vec;
        for(int i=0;i<values.size();i++){
            vec.push_back({values[i],labels[i]});
        }
        sort(vec.begin(),vec.end(),comp);
        unordered_map<int,int>mp;
        int sum=0;
        for(int i=0;i<vec.size() && numWanted;i++){
            int r=mp[vec[i].second];
            if(r<useLimit){
                numWanted--;
                sum+=vec[i].first;
                mp[vec[i].second]++;
            }
        }
        return sum;
    }
};
