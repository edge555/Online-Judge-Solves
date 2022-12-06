class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        vector<int>vec;
        for(auto x:arr1){
            int ind=lower_bound(arr2.begin(),arr2.end(),x)-arr2.begin();
            if(arr2[ind]!=x){
                continue;
            }
            int ind2=lower_bound(arr3.begin(),arr3.end(),x)-arr3.begin();
            if(arr3[ind2]!=x){
                continue;
            }
            vec.push_back(x);
        }
        return vec;
    }
};
