class Solution {
public:
    int secondHighest(string s) {
        int ara[10];
        memset(ara,0,sizeof(ara));
        for(auto c:s){
            if(c>='0' && c<='9'){
                ara[c-'0']++;
            }
        }
        int mx=-1;
        for(int i=9;i>=0;i--){
            if(ara[i]){
                if(mx==-1){
                    mx=i;
                }
                else{
                    return i;
                }
            }
        }
        return -1;
    }
};
