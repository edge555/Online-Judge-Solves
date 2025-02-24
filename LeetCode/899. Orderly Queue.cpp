class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k==0){
            return s;
        }
        if(k>1){
            sort(s.begin(),s.end());
            return s;
        }
        if(k==1){
            string t=s;
            for(int i=0;i<s.size();i++){
                s=s.substr(1)+s[0];
                t=min(t,s);
            }
            return t;
        }
        return "";
    }
};
