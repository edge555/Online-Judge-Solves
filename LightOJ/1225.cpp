#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i,j,cnt,k;
    char ara [100000];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",ara);
        cnt=0;
        k=strlen(ara)/2;
        for(j=0;j<k;j++)
        {
            if(ara[j]!=ara[strlen(ara)-(j+1)]){
                cnt=1;
                break;
            }
        }
        if(cnt==0)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }
    return 0;
}
