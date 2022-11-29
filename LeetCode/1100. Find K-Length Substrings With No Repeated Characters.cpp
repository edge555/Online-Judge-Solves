class Solution {
public:
    bool check(unordered_map<char,int>&mp){
        for(auto it:mp){
            if(it.second>1){
                return false;
            }
        }
        return true;
    }
    int numKLenSubstrNoRepeats(string s, int k) {
        if(k>s.size()){
            return 0;
        }
        unordered_map<char,int>mp;
        int st=0,en=k-1;
        for(int i=0;i<=en;i++){
            mp[s[i]]++;
        }
        int cnt=0;
        cnt+=check(mp);
        while(en<s.size()-1){
            mp[s[st++]]--;
            mp[s[++en]]++;
            cnt+=check(mp);
        }
        return cnt;
    }
};
