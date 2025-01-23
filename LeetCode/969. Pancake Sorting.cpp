class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int>vec;
        for (int l=arr.size();l>0;l--){
            int i=0;
            while(arr[i]!=l){
                i++;
            }
            if(i==l-1){
                continue;
            }
            if(i!=0){
                reverse(arr.begin(),arr.begin()+i+1);
                vec.push_back(i+1);
            }
            reverse(arr.begin(),arr.begin()+l);
            vec.push_back(l);
        }
        return vec;
    }
};
