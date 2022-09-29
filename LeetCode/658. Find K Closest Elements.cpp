class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        sort(arr.begin(),arr.end(),[&x](int a,int b)
        {
            if(abs(a-x)==abs(b-x)){
                return a<b;
            }
            return abs(a-x)<abs(b-x);
        });
        vector<int>vec(k,0);
        for(int i=0;i<k;i++){
            vec[i]=arr[i];
        }
        sort(vec.begin(),vec.end());
        return vec;
    }
};
