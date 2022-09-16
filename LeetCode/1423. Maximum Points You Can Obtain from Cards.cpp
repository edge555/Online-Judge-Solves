class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans=0,sum=0,st=0,en=k-1;
        for(int i=0;i<=en;i++){
            sum+=cardPoints[i];
        }
        ans=max(ans,sum);
        while(k--){
            st--;
            if(st==-1){
                st=cardPoints.size()-1;
            }
            sum+=cardPoints[st];
            sum-=cardPoints[en];
            en--;
            if(en==-1){
                en=cardPoints.size()-1;
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};
