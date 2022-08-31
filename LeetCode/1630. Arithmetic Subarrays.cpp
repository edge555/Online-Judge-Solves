class Solution {
public:
    bool func(vector<int>&vec){
        if(vec.size()<2){
            return false;
        }
        sort(vec.begin(),vec.end());
        int gap=vec[1]-vec[0];
        for(int i=0;i<vec.size()-1;i++){
            if(vec[i+1]-vec[i]!=gap){
                return false;
            }
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i=0;i<l.size();i++){
            int st=l[i],en=r[i];
            vector<int>vec;
            for(int j=st;j<=en;j++){
                vec.push_back(nums[j]);
            }
            ans.push_back(func(vec));
        }
        return ans;
    }
};
