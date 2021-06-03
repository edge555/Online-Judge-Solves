class Solution {
public:
    set<string>st;
    void func(string s,int i){
        if(i==s.size())
        {
            st.insert(s);
            return;
        }
        if(s[i]>='0' && s[i]<='9')
        {
            if(st.find(s)==st.end())
                func(s,i+1);
        }
        else
        {
            string t=s;
            if(s[i]>='a' && s[i]<='z')
            {
                t[i]=s[i]-32;
            }
            else
            {
                t[i]=s[i]+32;
            }
            if(st.find(t)==st.end())
                func(t,i+1);
            if(st.find(s)==st.end())
                func(s,i+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        func(s,0);
        vector<string>ans;
        for(auto x:st)
            ans.push_back(x);
        return ans;
    }
};
