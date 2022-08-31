class Solution {
public:
    int func(string &s){
        char c=s[0];
        for(auto ch:s){
            c=min(c,ch);
        }
        int cnt=0;
        for(auto ch:s){
            cnt+=ch==c;
        }
        return cnt;
    }
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int>vec;
        for(auto s:words){
            vec.push_back(func(s));
        }
        sort(vec.begin(),vec.end());
        vector<int>ans;
        for(auto q:queries){
            int r=func(q);
            int ind=upper_bound(vec.begin(),vec.end(),r)-vec.begin();
            ans.push_back(words.size()-ind);
        }
        return ans;
    }
};
