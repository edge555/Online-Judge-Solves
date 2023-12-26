class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<int>vec;
        for(auto it:mp){
            vec.push_back(it.second);
        }
        int cnt=0;
        for(auto x:vec){
            if(x==1){
                return -1;
            }
            if(x%3==0){
                cnt+=x/3;
                continue;
            }
            int r=x%3;
            if(r==1){
                cnt+=2+(x-4)/3;
            }
            else{
                cnt+=1+(x-2)/3;
            }
        }
        return cnt;
    }
};
