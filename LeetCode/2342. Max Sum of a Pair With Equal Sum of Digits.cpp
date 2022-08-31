class Solution {
public:
    int sod(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        for(auto x:nums){
            mp[sod(x)].push_back(x);
        }
        int ans=-1;
        for(auto it:mp){
            if(it.second.size()==1){
                continue;
            }
            int mx=it.second[0],mx2=-1;
            for(int i=1;i<it.second.size();i++){
                int x=it.second[i];
                if(x>mx){
                    mx2=mx;
                    mx=x;
                }
                else if(x==mx){
                    mx2=mx;
                }
                else if(x>mx2){
                    mx2=x;
                }
            }
            ans=max(ans,mx+mx2);
        }
        return ans;
    }
};
