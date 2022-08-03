class Solution {
public:
    bool check(unordered_map<char,int>&mp,int k,int mid){
        for(auto it:mp){
            if(it.second+k>=mid){
                return true;
            }
        }
        return false;
    }
    bool possible(string &s,int k,int mid){
        unordered_map<char,int>mp;
        int st=0,en=mid-1;
        for(int i=0;i<=en;i++){
            mp[s[i]]++;
        }
        if(check(mp,k,mid)){
            return true;
        }
        while(en<s.size()-1){
            mp[s[st]]--;
            st++;
            en++;
            mp[s[en]]++;
            if(check(mp,k,mid)){
                return true;
            }
        }
        return false;
    }
    int characterReplacement(string s, int k) {
        int lo=1,hi=s.size(),ans=1;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(s,k,mid)){
                ans=max(ans,mid);
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return ans;
    }
};
