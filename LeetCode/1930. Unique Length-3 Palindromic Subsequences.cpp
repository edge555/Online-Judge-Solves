class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int>vec[27];
        for(int i=0;i<s.size();i++){
            vec[s[i]-'a'].push_back(i);
        }
        int cnt=0;
        for(int i=0;i<26;i++){
            int sz=vec[i].size();
            if(sz<2){
                continue;
            }
            for(int j=0;j<26;j++){
                if(j==i){
                    cnt+=vec[j].size()>2;
                    continue;
                }
                int lb=lower_bound(vec[j].begin(),vec[j].end(),vec[i][0])-vec[j].begin();
                int ub=upper_bound(vec[j].begin(),vec[j].end(),vec[i][sz-1])-vec[j].begin();
                cnt+=ub-lb>0;
            }
        }
        return cnt;
    }
};
