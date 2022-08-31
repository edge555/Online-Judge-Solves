class Solution {
public:
    unordered_map<string,bool>mp;
    string add(string &s,int a){
        for(int i=1;i<s.size();i+=2){
            int r=((s[i]-'0')+a)%10;
            s[i]=r+'0';
        }
        return s;
    }
    string rot(string &s,int b){
        stack<char>st;
        while(b--){
            st.push(s.back());
            s.pop_back();
        }
        string t="";
        while(!st.empty()){
            t+=st.top();
            st.pop();
        }
        t+=s;
        return t;
    }
    void dfs(string &s,int a,int b){
        mp[s]=true;
        string p=add(s,a);
        string q=rot(s,b);
        if(mp.find(p)==mp.end()){
            mp[p]=true;
            dfs(p,a,b);
        }
        if(mp.find(q)==mp.end()){
            mp[q]=true;
            dfs(q,a,b);
        }
    }
    string findLexSmallestString(string s, int a, int b) {
        dfs(s,a,b);
        string ans=".";
        for(auto it:mp){
            if(ans=="."){
                ans=it.first;
            }
            else{
                ans=min(ans,it.first);
            }
        }
        return ans;
    }
};
