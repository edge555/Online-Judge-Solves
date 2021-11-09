class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        int ara[n+1],ara2[n+1];
        for(int i=0;i<n;i++){
            ara[i]=INT_MAX;
            ara2[i]=INT_MAX;
        }
        int last=INT_MAX;
        for(int i=n-1;i>=0;i--){
            if(s[i]==c){
                last=i;
            }
            ara[i]=last-i;
        }
        last=INT_MAX;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                last=i;
            }
            ara2[i]=abs(last-i);
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(min(ara[i],ara2[i]));
        }
        return ans;
    }
};
