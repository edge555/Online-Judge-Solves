#include <bits/stdc++.h>
using namespace std;

int ara[105][105];
int temp[105];
int kadane1D (int a[],int n)
{
    int maxfar=0,maxend=0,i,s=0;
    for (i=0;i<n;i++)
    {
        maxend+=a[i];
        if (maxend<0)
            maxend=0;
        else if (maxend>maxfar)
            maxfar=maxend;
    }
    return maxfar;
}
int kadane2D(int m,int n)
{
    int left,right,sum=0,maxsum=0,i,j;
    for (left=0;left<n;left++)
    {
        memset(temp,0,sizeof(temp));
        for (right=left;right<n;right++)
        {
            for (i=0;i<n;i++)
                temp[i]+=ara[i][right];

            sum=kadane1D(temp,m);
            maxsum=max(sum,maxsum);
        }
    }
    cout<<maxsum;
}

int kadaneNeg(int m,int n)
{
    int i,j,l=INT_MIN;
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            l=max(l,ara[i][j]);
        }
    }
    cout<<l;
}
int main()
{
    int m,n,i,j,p=0;
    cin>>n;
    m=n;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            cin>>ara[i][j];
            if (ara[i][j]>0)
                p++;
        }
    }
    if(p==0)
        kadaneNeg(m,n);
    else
        kadane2D(m,n);
}
