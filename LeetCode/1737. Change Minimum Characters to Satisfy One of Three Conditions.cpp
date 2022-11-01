class Solution {
public:
    int getmin(string &a){
        unordered_map<char,int>mp;
        for(auto c:a){
            mp[c]++;
        }
        int mx=0;
        for(auto it:mp){
            mx=max(mx,it.second);
        }
        return a.size()-mx;
    }
    int cond3(string &a,string &b){
        return getmin(a)+getmin(b);
    }
    int cond1(string &a,string &b){
        int ans=INT_MAX;
        for(char c='a';c<'z';c++){
            int cnt=0;
            for(auto cc:a){
                cnt+=cc>c;
            }
            for(auto cc:b){
                cnt+=cc<=c;
            }
            ans=min(ans,cnt);
        }
        return ans;
    }
    int minCharacters(string a, string b) {
        int ans=cond1(a,b);
        int ans2=cond1(b,a);
        int ans3=cond3(a,b);
        return min(ans,min(ans2,ans3));
    }
};
