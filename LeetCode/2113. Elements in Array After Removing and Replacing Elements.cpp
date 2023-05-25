class Solution {
public:
    vector<int> elementInNums(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int>vec;
        for(auto v:queries){
            int t=v[0],i=v[1];
            t%=2*n;
            int len=0;
            if(t<n){
                len=n-t;
            }
            else if(t==n){
                len=0;
            }
            else{
                len=t-n;
            }
            if(len<=i){
                vec.push_back(-1);
                continue;
            }
            if(t<n){
                vec.push_back(nums[i+t]);
            }
            else if(t==n){
                vec.push_back(-1);
            }
            else{
                vec.push_back(nums[i]);
            }
        }
        return vec;
    }
};
