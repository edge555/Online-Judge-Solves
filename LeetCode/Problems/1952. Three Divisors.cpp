class Solution {
public:
    bool isThree(int n) {
        int i,j,cnt=0;
        for(i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                cnt++;
                j=n/i;
                if(i!=j)
                    cnt++;
            }
        }
        return cnt==3;
    }
};
