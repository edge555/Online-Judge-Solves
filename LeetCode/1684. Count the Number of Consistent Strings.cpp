class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ara[30];
        memset(ara,0,sizeof(ara));
        for(int i=0;i<allowed.size();i++){
            ara[allowed[i]-'a']++;
        }
        int cnt=0;
        for(auto s:words){
            bool f=true;
            for(auto c:s){
                if(!ara[c-'a']){
                    f=false;
                    break;
                }
            }
            cnt+=f;
        }
        return cnt;
    }
};
