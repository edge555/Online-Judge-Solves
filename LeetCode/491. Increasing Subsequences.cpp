class Solution {
public:
    vector<vector<int>>ans;
    set<vector<int>>st;
    bool incr(vector<int>&vec){
        if(vec.size()<=1){
            return false;
        }
        for(int i=1;i<vec.size();i++){
            if(vec[i-1]>vec[i]){
                return false;
            }
        }
        return true;
    }
    void func(int i,vector<int>&nums,vector<int>&vec){
        if(i>=nums.size()){
            if(incr(vec)){
                if(st.find(vec)==st.end()){
                    ans.push_back(vec);
                    st.insert(vec);
                }
            }
            return;
        }
        vec.push_back(nums[i]);
        func(i+1,nums,vec);
        vec.pop_back();
        func(i+1,nums,vec);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>temp;
        func(0,nums,temp);
        return ans;
    }
};
