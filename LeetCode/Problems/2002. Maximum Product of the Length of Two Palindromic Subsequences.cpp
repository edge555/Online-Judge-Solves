class Solution {
public:
    int mx=1;
    bool ispal(string &s){
        if(s.empty()){
            return false;
        }
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-i-1]){
                return false;
            }
        }
        return true;
    }
    void func(string &a,string &b,int i,string &s){
        if(i==s.size()){
            if(ispal(a) && ispal(b)){
                mx=max(mx,(int)(a.size()*b.size()));
            }
            return;
        }
        string temp=a;
        temp+=s[i];
        func(temp,b,i+1,s);
        temp=b;
        temp+=s[i];
        func(a,temp,i+1,s);
        func(a,b,i+1,s);
    }
    int maxProduct(string s) {
        string t="";
        func(t,t,0,s);
        return mx;
    }
};
