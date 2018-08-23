#include <stdio.h>
#include <math.h>
int main ()
{
    double s,v,u,ac,t,r,a,b,c;
    int i,n;

    for (i=1;scanf ("%d",&n)!=0;i++)
    {
        if (n==0)
        {
            break;
        }
        else {
        scanf ("%lf %lf %lf",&a,&b,&c);

        switch (n)
        {
        case 1:
            s=(a+b)*0.5*c;
            ac=(b-a)/c;
            printf ("Case %d: %0.3lf %0.3lf\n",i,s,ac);
            break;

        case 2:
            s=((b*b)-(a*a))/(2*c);
            t=(b-a)/c;
            printf ("Case %d: %0.3lf %0.3lf\n",i,s,t);
            break;
        case 3:
            v=sqrt((a*a)+2*b*c);
            t=(v-a)/b;
            printf ("Case %d: %0.3lf %0.3lf\n",i,v,t);
            break;
        case 4:
            u=sqrt((a*a)-2*b*c);
            t=(a-u)/b;
            printf ("Case %d: %0.3lf %0.3lf\n",i,u,t);
            break;
        }
        }
    }
    return 0;
}
