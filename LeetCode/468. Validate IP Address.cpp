class Solution {
public:
    static vector<string>getStr(string s,char sep){
        vector<string>vec;
        string t="";
        for(auto c:s){
            if(c==sep){
                if(t.size()>0){
                    vec.push_back(t);
                }
                t="";
            }
            else{
                t+=c;
            }
        }
        if(t.size()>0){
            vec.push_back(t);
        }
        return vec;
    }
    static int getNum(string s){
        if(s.size()>3){
            return INT_MAX;
        }
        int n=0;
        for(auto c:s){
            n*=10;
            n+=c-'0';
        }
        return n;
    }
    static bool allowed(string s){
        if(s.size()>4){
            return false;
        }
        for(auto c:s){
            if((c>='0' && c<='9') || (c>='a' && c<='f') || (c>='A' && c<='F')){
                continue;
            }
            return false;
        }
        return true;
    }
    string validIPAddress(string queryIP) {
        int dot=0,colon=0,num=0,low=0,up=0;
        for(auto c:queryIP){
            if(c=='.'){
                dot++;
            }
            else if(c==':'){
                colon++;
            }
            else if(c>='0' && c<='9'){
                num++;
            }
            else if(c>='a' && c<='f'){
                low++;
            }
            else if(c>='A' && c<='f'){
                up++;
            }
            else{
                return "Neither";
            }
        }
        if(dot==3 && colon==0 && num+3==queryIP.size()){
            vector<string>vec=getStr(queryIP,'.');
            if(vec.size()!=4){
                return "Neither";
            }
            vector<int>nums;
            for(auto s:vec){
                if(s[0]=='0' && s.size()>1){
                    return "Neither";
                }
                else{
                    nums.push_back(getNum(s));
                }
            }
            for(auto x:nums){
                if(x<0 || x>255){
                    return "Neither";
                }
            }
            return "IPv4";
        }
        else if(colon==7 && dot==0){
            vector<string>vec=getStr(queryIP,':');
            if(vec.size()!=8){
                return "Neither";
            }
            for(auto s:vec){
                if(!allowed(s)){
                    return "Neither";
                }
            }
            return "IPv6";
        }
        return "Neither";
    }
};
