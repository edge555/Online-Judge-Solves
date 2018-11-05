#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main ()
{
    char ara[100000],ara2[1000000];
    long long int n,sum=0,i,j,k,m,x,a;
    scanf ("%lld",&n);
    getchar();
    for (i=0;i<n;i++)
    {
        scanf("%[^\n]",ara);
        getchar();
        k=strlen(ara);
        if (ara[0]=='d')
        {
            for (j=7,m=0;m<=k-6;j++,m++)
            {
                ara2[m]=ara[j];
            }
            x=atoi(ara2);
            sum+=x;
        }
        else if (ara[0]=='r')
            cout<<sum<<endl;
    }
}
