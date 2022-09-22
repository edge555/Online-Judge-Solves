class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans="";
        int j=0;
        for(int i=0;i<s.size();i++){
            if(j==spaces.size()){
                ans+=s[i];
            }
            else{
                if(i==spaces[j]){
                    ans+=" ";
                    ans+=s[i];
                    j++;
                }
                else{
                    ans+=s[i];
                }
            }
        }
        if(ans[ans.size()-1]==' '){
            ans.pop_back();
        }
        return ans;
    }
};
