class Solution {
public:
    string reverseWords(string s) {
        string t,ans="";
        stringstream ss(s);
        while(ss>>t){
            reverse(t.begin(),t.end());
            ans+=t+" ";
        }
        ans.pop_back();
        return ans;
    }
};
