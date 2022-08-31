class Solution {
public:
    static bool comp(string &a,string &b){
        string s=a+b;
        string t=b+a;
        return s>t;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>vec;
        for(auto x:nums){
            vec.push_back(to_string(x));
        }
        sort(vec.begin(),vec.end(),comp);
        string ans="";
        for(auto s:vec){
            ans+=s;
        }
        if(ans.size()>1 && ans[0]=='0'){
            return "0";
        }
        return ans;
    }
};
