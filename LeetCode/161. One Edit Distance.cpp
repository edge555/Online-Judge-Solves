class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        if(s.size()>t.size()){
            swap(s,t);
        }
        if(t.size()-s.size()>1){
            return false;
        }
        if(t.size()==s.size()){
            int cnt=0;
            for(int i=0;i<s.size();i++){
                cnt+=s[i]!=t[i];
            }
            return cnt==1;
        }
        else{
            int i=0,j=0;
            while(j<t.size()){
                if(s[i]==t[j]){
                    i++;
                }
                if(i==s.size()){
                    return true;
                }
                j++;
            }
            return false;
        }
        return false;
    }
};
