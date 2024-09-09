class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>vec;
        set<vector<int>>st;
        int n=nums.size();
        long sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int l=j+1;
                int r=n-1;
                while(l<r){
                    sum=nums[i];
                    sum+=nums[j];
                    sum+=nums[l];
                    sum+=nums[r];
                    if(sum==target){
                        st.insert({nums[i],nums[j],nums[l],nums[r]});
                    }
                    if(sum<target){
                        l++;
                    }
                    else{
                        r--;
                    }
                }
            }
        }
        for(auto x:st){
            vec.push_back(x);
        }
        return vec;
    }
};
