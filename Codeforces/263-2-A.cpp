#include <bits/stdc++.h>
using namespace std;
int diff(int a,int b)
{
    if (a>b)
        return a-b;
    else
        return b-a;
}
int main()
{
    int i,j,ara[100][100],a,b;
    for (i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>ara[i][j];
            if (ara[i][j]==1)
            {
                a=i;
                b=j;
            }
        }
    }
    cout<<diff(a,2)+diff(b,2);
}
