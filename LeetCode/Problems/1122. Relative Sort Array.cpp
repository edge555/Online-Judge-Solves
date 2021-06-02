class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int ara[1001],cnt[1001];
        memset(ara,0,sizeof(ara));
        memset(cnt,0,sizeof(cnt));
        for(auto x:arr2)
            ara[x]++;
        for(auto x:arr1)
        {
            if(ara[x])
                cnt[x]++;
        }
        vector<int>vec,vec2;
        for(auto x:arr1)
        {
            if(!ara[x])
                vec2.push_back(x);
        }
        sort(vec2.begin(),vec2.end());
        for(auto x:arr2)
        {
            while(cnt[x]--)
                vec.push_back(x);
        }
        vec.insert(vec.end(),vec2.begin(),vec2.end());
        return vec;
    }
};
