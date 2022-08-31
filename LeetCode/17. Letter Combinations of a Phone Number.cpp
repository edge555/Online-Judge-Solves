class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char,string>mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        vector<string>vec;
        if(digits.size()==1){
            for(int i=0;i<mp[digits[0]].size();i++){
                string temp="";
                temp+=mp[digits[0]][i];
                vec.push_back(temp);
            }
        }
        else if(digits.size()==2){
            for(int i=0;i<mp[digits[0]].size();i++){
                for(int j=0;j<mp[digits[1]].size();j++){
                    string temp="";
                    temp+=mp[digits[0]][i];
                    temp+=mp[digits[1]][j];
                    vec.push_back(temp);
                }
            }
        }
        else if(digits.size()==3){
            for(int i=0;i<mp[digits[0]].size();i++){
                for(int j=0;j<mp[digits[1]].size();j++){
                    for(int k=0;k<mp[digits[2]].size();k++){
                        string temp="";
                        temp+=mp[digits[0]][i];
                        temp+=mp[digits[1]][j];
                        temp+=mp[digits[2]][k];
                        vec.push_back(temp);
                    }
                }
            }
        }
        else{
            for(int i=0;i<mp[digits[0]].size();i++){
                for(int j=0;j<mp[digits[1]].size();j++){
                    for(int k=0;k<mp[digits[2]].size();k++){
                        for(int l=0;l<mp[digits[3]].size();l++){
                            string temp="";
                            temp+=mp[digits[0]][i];
                            temp+=mp[digits[1]][j];
                            temp+=mp[digits[2]][k];
                            temp+=mp[digits[3]][l];
                            vec.push_back(temp);
                        }
                    }
                }
            }
        }
        return vec;
    }
};
