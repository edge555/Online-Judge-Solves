class Solution {
public:
    string ans="";
    void check(string &t,string &pat){
        string num="";
        for(int i=0;i<t.size();i++){
            if(t[i]=='1'){
                num+=(i+'0'+1);
            }
        }
        sort(num.begin(),num.end());
        do{
            bool f=true;
            for(int i=0;i<pat.size();i++){
                if(pat[i]=='I'){
                    if(num[i]>=num[i+1]){
                        f=false;
                        break;
                    }
                }
                else{
                    if(num[i]<=num[i+1]){
                        f=false;
                        break;
                    }
                }
            }
            if(f){
                if(ans==""){
                    ans=num;
                }
                else{
                    ans=min(ans,num);
                }
            }
        }
        while(next_permutation(num.begin(),num.end()));
    }
    string smallestNumber(string pattern) {
        string t="";
        for(int i=0;i<9-pattern.size()-1;i++){
            t+="0";
        }
        for(int i=0;i<pattern.size()+1;i++){
            t+="1";
        }
        do{
            check(t,pattern);
        }while(next_permutation(t.begin(),t.end()));
        return ans;
    }
};
