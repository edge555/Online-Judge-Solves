class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        int ara[n+1];
        memset(ara,0,sizeof(ara));
        vector<int>vec;
        for(auto x:nums){
            ara[x]++;
        }
        for(int i=1;i<=n;i++){
            if(ara[i]==0){
                vec.push_back(i);
            }
        }
        return vec;
    }
};
