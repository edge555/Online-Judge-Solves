class Solution {
public:
    int percentageLetter(string s, char letter) {
        int cnt=0;
        for(auto c:s){
            if(c==letter){
                cnt++;
            }
        }
        return int(floor(((cnt*1.0)*100)/s.size()));
    }
};
