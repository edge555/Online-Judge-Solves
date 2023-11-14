
class Solution {
public:
    int findMinGroup(int x,unordered_map<int,int>&mp){
        int tot=0;
        for(auto it:mp){
            int freq=it.second;
            int a=freq/(x+1);
            int b=freq%(x+1);
            if(b==0){
                tot+=a;
            }
            else if(x-b<=a){
                tot+=(a+1);
            }
            else{
                return -1;
            }
        }
        return tot;
    }
    int minGroupsForValidAssignment(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        int minfreq=1e9;
        for(auto it:mp){
            minfreq=min(minfreq,it.second);
        }
        int mingrp=1e9;
        for(int i=1;i<=minfreq;i++){
            int ans=findMinGroup(i,mp);
            if(ans!=-1){
                mingrp=min(mingrp,ans);
            }
        }
        if(mingrp==1e9){
            mingrp=-1;
        }
        return mingrp;
    }
};
