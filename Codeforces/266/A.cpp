#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt=0;
    cin>>n;
    getchar();
    char a[10000];
    gets(a);
    for (i=0;i<strlen(a)-1;i++)
    {
        if (a[i]==a[i+1])
            cnt++;
    }
    cout<<cnt;
}
