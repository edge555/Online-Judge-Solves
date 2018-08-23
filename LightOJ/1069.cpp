#include <stdio.h>
int main ()
{
 int i=1,a,b,d,n,r,t,m;

 scanf ("%d",&n);

 while (i<=n)
 {
     scanf ("%d %d",&a,&b);
     if (a!=0 && b<=100)
     {
        d=b-a;
        t=(b-a)*4;
        m=(a*4)+19;
        r=t+m;

        if (d==0)
            printf ("Case %d: %d\n",i,m);
        else if (d>0)
            printf ("Case %d: %d\n",i,r);
        else if (d<0)
        {
            d=d*(-1);
            t=d*4;
            m=(a*4)+19;
            r=t+m;
            printf ("Case %d: %d\n",i,r);
        }
        i++;
     }
 }
 return 0;
}
