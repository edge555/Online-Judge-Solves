class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector< vector<int> > ans;
        int gap=1e9;
        for(int i=0;i<arr.size()-1;i++){
            gap=min(gap,arr[i+1]-arr[i]);
        }
        vector<int>temp;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]==gap){
                temp.clear();
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
