class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0,r=1,n=columnTitle.size();
        for(int i=0;i<n-1;i++){
            r*=26;
        }
        for(int i=0;i<n;i++){
            ans+=(columnTitle[i]-'A'+1)*r;
            r/=26;
        }
        return ans;
    }
};
