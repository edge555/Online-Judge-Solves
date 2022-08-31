class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans={{}};
        map<vector<int>,bool>mp;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            vector<int>vec;
            for(int j=0;j<n-i-1;j++){
                vec.push_back(0);
            }
            while(vec.size()<nums.size()){
                vec.push_back(1);
            }
            do{
                vector<int>temp;
                for(int i=0;i<vec.size();i++){
                    if(vec[i]==1){
                        temp.push_back(nums[i]);
                    }
                }
                sort(temp.begin(),temp.end());
                if(mp.find(temp)==mp.end()){
                    ans.push_back(temp);
                    mp[temp]=true;
                }
            }while(next_permutation(vec.begin(),vec.end()));
        }
        return ans;
    }
};
