class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<int>vec;
        int x;
        for(int i=1;i<=nums.size();i++){
            if(mp[i]>1){
                vec.push_back(i);
            }
            else if(mp[i]==0){
                x=i;
            }
        }
        vec.push_back(x);
        return vec;
    }
};
