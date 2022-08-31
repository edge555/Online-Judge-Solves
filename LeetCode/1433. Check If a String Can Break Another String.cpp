class Solution {
public:
    bool check(string s1,string s2){
        int n=s1.size(),m=s2.size();
        int ara[n+1],freq[30];
        memset(ara,0,sizeof(ara));
        memset(freq,0,sizeof(freq));
        for(auto c:s2){
            freq[c-'a']++;
        }
        for(int i=0;i<n;i++){
            if(freq[s1[i]-'a']){
                freq[s1[i]-'a']--;
                ara[i]++;
            }
        }
        for(int i=0;i<n;i++){
            if(!ara[i]){
                bool f=false;
                for(int j=0;j<26;j++){
                    if(j>=s1[i]-'a' && freq[j]){
                        freq[j]--;
                        f=true;
                        break;
                    }
                }
                if(!f){
                    return false;
                }
            }
        }
        return true;
    }
    bool checkIfCanBreak(string s1, string s2) {
        return check(s1,s2) || check(s2,s1);
    }
};
