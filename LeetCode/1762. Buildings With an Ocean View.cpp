class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        vector<int>ans;
        int mx=-1;
        for(int i=heights.size()-1;i>=0;i--){
            if(mx==-1){
                mx=heights[i];
                ans.push_back(i);
            }
            else{
                if(heights[i]>mx){
                    ans.push_back(i);
                    mx=heights[i];
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
