#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        int a,b,c,d,k,sum=0,p;
        cin>>a>>b>>c>>d;
        k=c-b;
        if(k==b-a)
        {
          p=a+(d-1)*k;
          printf("Case %d: %d\n",i,p);
        }
        else
            printf ("Case %d: Error\n",i);

    }
}
