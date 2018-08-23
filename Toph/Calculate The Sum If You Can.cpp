#include <bits/stdc++.h>

#define sc scanf
#define pf printf
#define in1(num) scanf("%d",&num)
#define in2(num1,num2) scanf("%d %d",&num1,&num2)
typedef long long ll;
using namespace std;

int main()
{
    int n;
    in1(n);
    while (n--)
    {
       ll k,l;
       sc ("%lld",&k);
       if(k%2==0){
            l=(-1)*(k/2);
            pf ("%lld\n",l);
        }
        else if(k%2==1){
            k=k-3;
            l=(-1)*(k/2);
            pf ("%lld\n",l);

        }


    }
}
