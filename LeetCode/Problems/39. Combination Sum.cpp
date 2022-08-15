class Solution {
public:
    vector<vector<int>>ans;
    void func(int ind,int sum,vector<int>&vec,vector<int>&cand,int target){
        if(sum>target){
            return;
        }
        if(sum==target){
            ans.push_back(vec);
            return;
        }
        if(ind>=cand.size()){
            return;
        }
        vec.push_back(cand[ind]);
        func(ind,sum+cand[ind],vec,cand,target);
        vec.pop_back();
        func(ind+1,sum,vec,cand,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        func(0,0,temp,candidates,target);
        return ans;
    }
};
