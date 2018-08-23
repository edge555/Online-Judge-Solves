#include <stdio.h>
#include <string.h>

int main ()
{
    long long int n,i,cnt1,r,j,cnt2,k;
    char ara[100000];
    scanf ("%lld",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%s",ara);
        k=strlen(ara);
        for (j=0,cnt1=0,cnt2=0;ara[j]!='\0';j++)
        {
            r=ara[j];

            if(r=='1')
                cnt1++;
            else
                cnt2++;
        }
        if (cnt1==1 && cnt2==k-1)
            printf ("Yes\n");
        else if (cnt1==k-1 && cnt2==1)
            printf ("Yes\n");
        else
            printf ("No\n");
    }
    return 0;
}
