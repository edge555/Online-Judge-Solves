class Solution {
public:
    string removeVowels(string s) {
        string p="";
        for(auto c:s){
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                continue;
            }
            p+=c;
        }
        return p;
    }
};
