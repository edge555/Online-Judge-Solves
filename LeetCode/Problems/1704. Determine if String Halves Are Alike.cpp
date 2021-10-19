class Solution {
public:
    vector<char>vowel={'a','e','i','o','u','A','E','I','O','U'};
    bool isVowel(char c){
        for(auto x:vowel){
            if(x==c){
                return true;
            }
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        int v1=0,v2=0;
        for(int i=0,j=s.size()-1;i<s.size()/2;i++,j--){
            v1+=isVowel(s[i]);
            v2+=isVowel(s[j]);
        }
        return v1==v2;
    }
};
