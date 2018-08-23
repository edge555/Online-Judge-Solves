#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i=0,j,a[52],d=0;
        char c=' ';
        while(c==' ')
        {
           scanf("%d%c",&a[i],&c);
           i++;
        }
        for(j=0;j<i;j++)
        {
            if(a[j]==i-1)
            {
                a[j]=0;
                break;
            }
        }
        for(j=0;j<i;j++)
        {
            if(d<a[j])
                d=a[j];
        }
        printf("%d\n",d);
    }
    return 0;
}
