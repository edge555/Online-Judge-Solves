class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int ara[100005];
        memset(ara,0,sizeof(ara));
        int mn=1e6;
        for(auto x:nums){
            if(mn>=x){
                mn=x;
            }
        }
        mn*=-1;
        for(auto x:nums){
            x+=mn;
            ara[x]++;
        }

        vector<int>ans;
        for(int i=0;i<100000;i++){
            while(ara[i]--){
                ans.push_back(i-mn);
            }
        }
        return ans;
    }
};
