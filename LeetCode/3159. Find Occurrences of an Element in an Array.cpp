class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>ind;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                ind.push_back(i);
            }
        }
        vector<int>vec;
        for(auto q:queries){
            if(q>ind.size()){
                vec.push_back(-1);
            }
            else{
                vec.push_back(ind[q-1]);
            }
        }
        return vec;
    }
};
