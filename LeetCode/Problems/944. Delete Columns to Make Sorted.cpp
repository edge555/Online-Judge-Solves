class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs.size(),m=strs[0].size();
        int ans=0;
        for(int i=0;i<m;i++){
            char c='.';
            bool f=true;
            for(int j=0;j<n;j++){
                if(c=='.'){
                    c=strs[j][i];
                } else{
                    if(c>strs[j][i]){
                        f=false;
                        break;
                    }
                    c=strs[j][i];
                }
            }
            if(!f){
                ans++;
            }
        }
        return ans;
    }
};
