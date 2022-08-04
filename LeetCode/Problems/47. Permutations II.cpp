class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>vec,temp;
        sort(nums.begin(),nums.end());
        do{
            temp.push_back(nums);
        }while(next_permutation(nums.begin(),nums.end()));
        vec.push_back(temp[0]);
        for(int i=1;i<temp.size();i++){
            if(temp[i]==temp[i-1]){
                continue;
            }
            vec.push_back(temp[i]);
        }
        return vec;
    }
};
