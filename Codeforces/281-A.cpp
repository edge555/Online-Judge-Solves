#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ara[10000];
    int i,l=0;
    scanf ("%s",ara);
    for (i=0;ara[i];i++)
    {
        if (i==l)
            if(ara[l]>='a' && ara[i]<='z'){
                ara[l]=ara[i]-32;
                break;
        }
    }

    cout<<ara;
}
