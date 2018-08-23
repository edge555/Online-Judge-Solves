#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ara[10000];
    int i,j,k,ara2[10000],n=0;
    gets(ara);
    for (i=0;ara[i];i++)
    {
        if (ara[i]=='1' || ara[i]=='2' || ara[i]=='3'){
            ara2[n]=ara[i]-'0';
            n++;
        }
    }
    sort(ara2,ara2+n);
    for (i=0;i<n;i++){
        cout<<ara2[i];
        if(i<n-1)
            cout<<"+";
    }
    cout<<endl;
}
