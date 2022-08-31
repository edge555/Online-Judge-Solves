class Solution {
public:
    bool checkIfPangram(string sentence) {
        int ara[30];
        memset(ara,0,sizeof(ara));
        for(int i=0;i<sentence.size();i++){
            ara[sentence[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(!ara[i]){
                return false;
            }
        }
        return true;
    }
};
