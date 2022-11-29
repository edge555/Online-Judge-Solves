class Solution {
public:
    int missingNumber(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        if(arr[0]==arr[arr.size()-1]){
            return arr[0];
        }
        int mx=-1;
        for(int i=0;i<arr.size()-1;i++){
            mx=max(mx,arr[i+1]-arr[i]);
        }
        mx>>=1;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]!=arr[i]+mx){
                return arr[i]+mx;
            }
        }
        return mx;
    }
};
