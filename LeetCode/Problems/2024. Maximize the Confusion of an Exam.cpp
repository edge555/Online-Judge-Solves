class Solution {
public:
    static bool possible(string &s,int mid,int k){
        int t=0,f=0;
        int st=0,en=mid-1;
        for(int i=0;i<=en;i++){
            if(s[i]=='T'){
                t++;
            }
            else{
                f++;
            }
        }
        if(min(t,f)<=k){
            return true;
        }
        while(en<s.size()){
            if(s[st]=='T'){
                t--;
            }
            else{
                f--;
            }
            st++;
            en++;
            if(s[en]=='T'){
                t++;
            }
            else{
                f++;
            }
            if(en>=s.size()){
                break;
            }
            if(min(t,f)<=k){
                return true;
            }
        }
        return false;
    }
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n=answerKey.size();
        int lo=1,hi=n,ans=1;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(possible(answerKey,mid,k)){
                ans=max(ans,mid);
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return ans;
    }
};
