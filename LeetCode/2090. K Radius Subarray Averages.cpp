class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>vec(n,-1);
        int st=0,en=k*2;
        if(en>=n){
            return vec;
        }
        long long sum=0;
        for(int i=0;i<=en;i++){
            sum+=nums[i];
        }
        int p=k,r=2*k+1;
        vec[p]=sum/r;
        while(en<n-1){
            sum-=nums[st++];
            sum+=nums[++en];
            vec[++p]=sum/r;
        }
        return vec;
    }
};
