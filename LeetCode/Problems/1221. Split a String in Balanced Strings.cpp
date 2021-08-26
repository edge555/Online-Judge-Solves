class Solution {
public:
    int balancedStringSplit(string s) {
        int i,cnt=0,l=0,r=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='L')
                l++;
            else
                r++;
            if(l==r)
                cnt++;
        }
        return cnt;
    }
};
