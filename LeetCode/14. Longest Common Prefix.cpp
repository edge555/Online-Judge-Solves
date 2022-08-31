class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix="";
        int i,j;
        for(i=0;;i++)
        {
            char ch='.';
            for(j=0;j<strs.size();j++)
            {
                if(strs[j].size()<=i)
                {
                    ch='.';
                    break;
                }
                if(j==0)
                    ch=strs[j][i];
                else
                {
                    if(strs[j][i]!=ch)
                    {
                        ch='.';
                        break;
                    }
                }
            }
            if(ch!='.')
                prefix+=ch;
            else
                break;
        }
        return prefix;
    }
};
