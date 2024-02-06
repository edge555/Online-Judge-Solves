class Solution {
public:
    vector<int> sameEndSubstringCount(string s, vector<vector<int>>& queries) {
        vector<vector<int>>vec(26);
        for(int i=0;i<s.size();i++){
            vec[s[i]-'a'].push_back(i);
        }
        vector<int>ans;
        for(auto v:queries){
            int l=v[0],r=v[1],sum=0;
            for(int i=0;i<26;i++){
                int lb=lower_bound(vec[i].begin(),vec[i].end(),l)-vec[i].begin();
                int ub=upper_bound(vec[i].begin(),vec[i].end(),r)-vec[i].begin();
                int r=ub-lb;
                sum+=((r+1)*r)>>1;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
