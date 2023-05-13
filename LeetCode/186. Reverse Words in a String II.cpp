class Solution {
public:
    void reverseWords(vector<char>& s) {
        reverse(s.begin(),s.end());
        int left=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                reverse(s.begin()+left,s.begin()+i);
                left=i+1;
            }
        }
        reverse(s.begin()+left,s.end());
    }
};
