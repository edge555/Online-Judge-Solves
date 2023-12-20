class Solution {
public:
    long long minimumSteps(string s) {
        long long cnt=0;
        int n=s.size();
        int shouldBeInd=s[n-1]=='1'?n-2:n-1;
        for(int i=n-2;i>=0;i--){
            if(s[i]=='1'){
                if(i!=shouldBeInd){
                    cnt+=(long long)(shouldBeInd-i);
                }
                shouldBeInd--;
            }
        }
        return cnt;
    }
};
