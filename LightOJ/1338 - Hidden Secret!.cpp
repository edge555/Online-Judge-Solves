#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ara[110],ara2[110];
    int i,n;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {
        gets(ara);
        gets(ara2);
        int j,k,sum=0,sum1=0;
        j=strlen(ara);
        for(k=0;k<j;k++)
            ara[k]=tolower(ara[k]);
            
        for(k=0;k<j;k++)
        {
            if(ara[k]!=' ')
                sum+=ara[k];
        }
        j=strlen(ara2);
        for(k=0;k<j;k++)
            ara2[k]=tolower(ara2[k]);
        
        for(k=0;k<j;k++)
        {
            if(ara2[k]!=' ')
                sum1+=ara2[k];
        }
        if(sum==sum1)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }
    return 0;
}
