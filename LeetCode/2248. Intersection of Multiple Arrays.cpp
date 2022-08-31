class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int ara[1001][1001];
        memset(ara,0,sizeof(ara));
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                ara[i][nums[i][j]]++;
            }
        }
        vector<int>ans;
        for(int i=1;i<=1000;i++){
            int cnt=0;
            for(int j=0;j<nums.size();j++){
                if(ara[j][i]){
                    cnt++;
                }
            }
            if(cnt==nums.size()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
