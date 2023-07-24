class Solution {
public:
    int countLetters(string s) {
        int sum=0,cnt=1;
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[i-1]){
                sum+=(cnt*(cnt+1))>>1;
                cnt=1;
            }
            else{
                cnt++;
            }
        }
        sum+=(cnt*(cnt+1))>>1;
        return sum;
    }
};
