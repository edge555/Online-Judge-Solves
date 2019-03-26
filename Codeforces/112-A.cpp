#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[10000],b[10000];
    int i,k;
    gets(a);
    for (i=0;a[i]!='\0';i++)
        a[i]=tolower(a[i]);
    gets(b);
    for (i=0;b[i]!='\0';i++)
        b[i]=tolower(b[i]);

    k=strcmp(a,b);
    cout<<k<<endl;
}
