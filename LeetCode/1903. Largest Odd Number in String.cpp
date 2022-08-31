class Solution {
public:
    string largestOddNumber(string num) {
        string s="",t="";
        int i=0;
        for(i=num.size()-1;i>=0;i--){
            int r=num[i]-'0';
            if(r&1){
                break;
            }
        }
        if(i==-1){
            return "";
        }
        return num.substr(0,i+1);
    }
};
