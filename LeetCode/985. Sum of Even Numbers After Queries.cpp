class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0;
        for(auto x:nums){
            if(x%2==0){
                sum+=x;
            }
        }
        vector<int>vec;
        for(auto v:queries){
            int val=v[0],ind=v[1];
            int prev=nums[ind];
            int temp=prev+val;
            if(prev&1){
                if(temp%2==0){
                    sum+=temp;
                }
                nums[ind]=temp;
            }
            else{
                sum-=prev;
                if(temp%2==0){
                    sum+=temp;
                }
                nums[ind]=temp;
            }
            vec.push_back(sum);
        }
        return vec;
    }
};
