class Solution {
public:
    long long sum(string &s){
        long long i=0,sum=0;
        while(i<s.size()){
            sum*=10;
            sum+=s[i]-'a';
            i++;
        }
        return sum;
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return sum(firstWord)+sum(secondWord)==sum(targetWord);
    }
};
