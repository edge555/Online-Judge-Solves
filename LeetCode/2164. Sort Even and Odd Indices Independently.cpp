class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>ans,vec,vec2;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                vec.push_back(nums[i]);
            }
            else{
                vec2.push_back(nums[i]);
            }
        }
        sort(vec.begin(),vec.end());
        sort(vec2.begin(),vec2.end(),greater<int>());
        for(int i=0,j=0,k=0;k<nums.size();k++){
            if(k%2==0){
                ans.push_back(vec[i++]);
            }
            else{
                ans.push_back(vec2[j++]);
            }
        }
        return ans;
    }
};
