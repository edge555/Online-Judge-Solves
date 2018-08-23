#include <bits/stdc++.h>

#define sc scanf
#define pf printf
#define in1(num) scanf("%d",&num)
#define in2(num1,num2) scanf("%d %d",&num1,&num2)
typedef long long int ll;
using namespace std;

void chkprime(int n)
{
   int prime[10001];
   memset(prime,0,sizeof(prime));
   prime[0]=1;
   prime[1]=1;
   int i,j;
   for (i=2;i<=sqrt(n);i++)
   {
       if (prime[i]==0)
       {
           for (j=2;i*j<=n;j++)
            prime[i*j]=1;
       }

   }
   if (prime[n]==0)
        pf("NO PUNISHMENT\n");
   else
   {
       for (i=0;i<n;i++)
        pf("I DID NOT DO THE ASSIGNMENT.\n");
   }
}
int main()
{
    int n;
    in1(n);
    chkprime(n);

}
