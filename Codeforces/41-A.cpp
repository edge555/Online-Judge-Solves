#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ara[10000],ara2[10000];
    int i,j;
    scanf ("%s",ara);
    scanf ("%s",ara2);
    int a=strlen(ara);
    int b=strlen(ara2);
    for (i=0,j=b-1;ara[i];i++,j--)
        if (ara[i]!=ara2[j])
        {
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
}
