class Solution {
public:
    bool special(char c){
        string s="!@#$%^&*()-+";
        for(char ch : s){
            if(c==ch){
                return true;
            }
        }
        return false;
    }
    bool strongPasswordCheckerII(string password) {
        if(password.size()<8){
            return false;
        }
        int low=0,upper=0,digit=0,spec=0;
        for(auto c : password){
            if(c>='a' && c<='z'){
                low++;
            }
            if(c>='A' && c<='Z'){
                upper++;
            }
            if(c>='0' && c<='9'){
                digit++;
            }
            if(special(c)){
                spec++;
            }
        }
        bool adj=false;
        for(int i=0;i<password.size()-1;i++){
            if(password[i]==password[i+1]){
                adj=true;
                break;
            }
        }
        return low && upper && digit && spec && !adj;
    }
};
