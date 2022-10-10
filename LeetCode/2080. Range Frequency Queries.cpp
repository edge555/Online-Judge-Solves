class RangeFreqQuery {
public:
    vector<int>vec[10001];
    RangeFreqQuery(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            vec[arr[i]].push_back(i);
        }
    }

    int query(int left, int right, int value) {
        int lb=lower_bound(vec[value].begin(),vec[value].end(),left)-vec[value].begin();
        int rb=upper_bound(vec[value].begin(),vec[value].end(),right)-vec[value].begin();
        return rb-lb;
    }
};
