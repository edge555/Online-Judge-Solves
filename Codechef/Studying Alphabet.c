#include <stdio.h>
#include <string.h>
int main()
{
    char ara[10000],ara2[10000];
    int n,i,j,k,cnt,l,m;
    gets(ara2);
    k=strlen(ara2);
    scanf ("%d",&n);

    for (l=0;l<n;l++)
    {
        cnt=0;
        scanf ("%s",ara);
    m=strlen(ara);
   
    for (i=0;ara2[i]!='\0';i++)
    {
        for (j=0;ara[j]!='\0';j++)
        {
            if (ara2[i]==ara[j])
                cnt++;
        }
    }
    if (cnt==m)
        printf ("Yes\n");
    else
        printf ("No\n");
    }
}
