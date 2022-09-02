class Solution {
public:
    vector<pair<int,int>>vec;
    static bool comp(pair<int,int>&a,pair<int,int>&b){
        double x=(a.first*1.0)/a.second;
        double y=(b.first*1.0)/b.second;
        return x<y;
    }
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                vec.push_back({arr[i],arr[j]});
            }
        }
        sort(vec.begin(),vec.end(),comp);
        return {vec[k-1].first,vec[k-1].second};
    }
};
