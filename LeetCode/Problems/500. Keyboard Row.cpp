class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string r1="qwertyuiop";
        string r2="asdfghjkl";
        string r3="zxcvbnm";
        int ara[30];
        memset(ara,0,sizeof(ara));
        for(auto c:r1){
            ara[c-'a']=1;
        }
        for(auto c:r2){
            ara[c-'a']=2;
        }
        for(auto c:r3){
            ara[c-'a']=3;
        }
        vector<string>ans;
        for(auto s:words){
            bool f=true;
            int last=-1;
            for(auto c:s){
                if(c>='A' && c<='Z'){
                    c+=32;
                }
                if(last==-1){
                    last=ara[c-'a'];
                }
                else{
                    if(ara[c-'a']!=last){
                        f=false;
                        break;
                    }
                }
            }
            if(f){
                ans.push_back(s);
            }
        }
        return ans;
    }
};
