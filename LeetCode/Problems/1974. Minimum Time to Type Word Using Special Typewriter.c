class Solution {
public:
    int minTimeToType(string word) {
        int cur=0,ans=0;
        for(auto c:word){
            int x=c-'a';
            int mn=min(cur,x);
            int mx=max(cur,x);
            int a=mx-mn;
            int b=26+mn-mx;
            ans+=min(a,b);
            cur=x;
        }
        return ans+word.size();
    }
};
