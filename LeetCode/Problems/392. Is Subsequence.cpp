class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s==t)
            return true;
        int i,j=0;
        for(i=0;i<t.size();i++)
        {
            if(t[i]==s[j])
                j++;
            if(j==s.size())
                return true;
        }
        return false;
    }
};
