class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        vector<int>temp=arr;
        sort(temp.begin(),temp.end());
        int m=temp[(temp.size()-1)/2];
        auto comp=[&m](int a,int b)
        {
            if(abs(a-m)==abs(b-m))
                return a>b;
            return abs(a-m)>abs(b-m);
        };
        sort(arr.begin(),arr.end(),comp);
        temp.clear();
        for(int i=0;i<k;i++){
            temp.push_back(arr[i]);
        }
        return temp;
    }
};
