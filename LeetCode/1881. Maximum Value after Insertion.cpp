class Solution {
public:
    string maxValue(string n, int x) {
        string ans="";
        if(n[0]!='-'){
            bool f=false;
            for(int i=0;i<n.size();i++){
                if(f){
                    ans+=n[i];
                }
                else{
                    if(n[i]-'0'<x){
                        ans+=char(x+48);
                        ans+=n[i];
                        f=true;
                    }
                    else{
                        ans+=n[i];
                    }
                }
            }
            if(!f){
                ans+=char(x+48);
            }
        }
        else{
            bool f=false;
            ans="-";
            for(int i=1;i<n.size();i++){
                if(f){
                    ans+=n[i];
                }
                else{
                    if(n[i]-'0'>x){
                        ans+=char(x+48);
                        ans+=n[i];
                        f=true;
                    }
                    else{
                        ans+=n[i];
                    }
                }
            }
            if(!f){
                ans+=char(x+48);
            }
        }
        return ans;
    }
};
