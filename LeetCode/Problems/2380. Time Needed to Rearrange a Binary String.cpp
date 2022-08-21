class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int cnt=0;
        while(true){
            bool f=true;
            for(int i=0;i<s.size()-1;i++){
                if(s[i]=='0' && s[i+1]=='1'){
                    f=false;
                    swap(s[i],s[i+1]);
                    i++;
                }
            }
            if(f){
                break;
            }
            cnt++;
        }
        return cnt;
    }
};
