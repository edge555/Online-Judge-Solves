#include<bits/stdc++.h>
using namespace std;

int ar[105][105];

int main(void)
{
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
            scanf("%d",&ar[i][j]);
    }

    int mx = -1e9;

    for(int i=0;i<n;i++)
    {

        int sum = 0;

        for(int j=0;j<n;j++)
        {

            sum+=ar[i][j];
        }

        mx = max(sum , mx);

        sum = 0;

        for(int j=0;j<n;j++)
        {

            sum+=ar[j][i];
        }

        mx = max(sum , mx);
    }

    int sum = 0;

    for(int i=0;i<n;i++)
    {

        sum+=ar[i][i];
    }

    mx = max(sum , mx);
    sum = 0;

    for(int i=0;i<n;i++)
    {

        sum+=ar[i][n-i-1];
    }
    mx = max(sum , mx);

    printf("%d\n",mx);

    return 0;
}
