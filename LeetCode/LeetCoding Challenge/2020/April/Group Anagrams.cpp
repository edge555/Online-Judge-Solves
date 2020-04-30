class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>temp;
        vector<vector<string> >vec;
        int i,ind=0;
        unordered_map<string,int>mp;
        unordered_map<string,string>srt;
        string a;
        for(i=0;i<strs.size();i++)
        {
            a=strs[i];
            sort(a.begin(),a.end());
            srt[strs[i]]=a;
            if(mp.find(a)==mp.end())
            {
                mp[a]=ind;
                ind++;
            }
        }
        for(i=0;i<ind;i++)
            vec.push_back(temp);
        for(i=0;i<strs.size();i++)
            vec[mp[srt[strs[i]]]].push_back(strs[i]);
        return vec;
    }
};
