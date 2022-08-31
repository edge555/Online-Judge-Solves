class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int i,ara[s.size()+1];
        for(i=0;i<indices.size();i++)
        {
            ara[indices[i]]=s[i]-'a';
        }
        string ans="";
        for(i=0;i<s.size();i++)
        {
            ans+=char(ara[i]+'a');
        }
        return ans;
    }
};
