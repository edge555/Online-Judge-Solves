class Solution {
public:
    string getSmallestString(string s, int k) {
        string ans="";
        for(auto c:s){
            if(k==0 || c=='a'){
                ans+=c;
                continue;
            }
            int mn=(c-'a'+26)%26;
            if(mn>=13){
                mn=26-mn;
            }
            if(mn<=k){
                ans+='a';
                k-=mn;
            }
            else{
                int x=min((26+c-'a'+k)%26,(26+c-'a'-k)%26);
                ans+=x+'a';
                k=0;
            }
        }
        return ans;
    }
};
