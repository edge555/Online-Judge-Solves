#include<stdio.h>
int main ()
{
   long long int n,a;

   scanf("%lld",&n);

   if(n%2==0)
   {
       a=n/2;
       printf("%lld\n",a);
   }

   else
   {
       a=(-(n+1)/2);
       printf("%lld\n",a);
   }

    return 0;
}
