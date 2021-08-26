class Solution {
public:
    bool checkPerfectNumber(int num) {
        int i,j,sum=1;
        for(i=2;i*i<=num;i++)
        {
            if(num%i==0)
            {
                sum+=i;
                j=num/i;
                if(i!=j)
                    sum+=j;
            }
        }
        return sum==num;
    }
};
