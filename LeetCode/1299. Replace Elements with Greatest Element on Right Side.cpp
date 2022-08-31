class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i,ara[100005];
        memset(ara,0,sizeof(ara));
        for(i=1;i<arr.size();i++)
        {
            ara[arr[i]]++;
        }
        int j=100001;
        vector<int>vec;
        for(i=0;i<arr.size()-1;i++)
        {
            ara[arr[i]]--;
            while(ara[j]<=0)
                j--;
            vec.push_back(j);
        }
        vec.push_back(-1);
        return vec;
    }
};
