class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int ara[101][27];
        memset(ara,0,sizeof(ara));
        int i,j,n=words.size();
        vector<string>ans;
        for(i=0;i<words.size();i++)
        {
            for(auto c:words[i])
            {
                ara[i][c-'a']++;
            }
        }
        for(j=0;j<26;j++)
        {
            int mn=INT_MAX;
            for(i=0;i<words.size();i++)
            {
                mn=min(mn,ara[i][j]);
            }
            if(!mn)
                continue;
            while(mn--)
            {
                string t="";
                t+=j+'a';
                ans.push_back(t);
            }
        }
        return ans;
    }
};
