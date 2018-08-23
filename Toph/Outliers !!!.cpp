#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
ll ara[1000005];
double Median(int st,int en)
{
    int len=en-st+1;
    double mid;
    if(len%2==0)
    {
        mid=ara[st+(len/2)]+ara[st+(len/2)-1];
        mid/=2.0;
    }
    else
        mid=ara[st+(len/2)];
    return mid;
}
int main()
{
    int tc,j;
    sf(tc);
    for (j=1;j<=tc;j++)
    {
        int n,i;
        sf(n);
        for (i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        double mid,m1,m2;
        if(n%2==1)
        {
            int k=n/2;
            mid=ara[k];
            m1=Median(0,k-1);
            m2=Median(k+1,n-1);
        }
        else
        {
            int x=n/2;
            int y=x-1;
            mid=(ara[x]+ara[y])/2.0;
            m1=Median(0,y);
            m2=Median(x,n-1);
        }
        double f1=m1-1.5*(m2-m1);
        double f2=m2+1.5*(m2-m1);
        int cnt=0;
        for (i=0;i<n;i++)
        {
            if(ara[i]<f1 || ara[i]>f2)
            {
                if(i!=0 && ara[i]== ara[i-1])
                    continue;
                cnt++;
            }
        }
        pf("Experiment %d: %.2f %.2f %.2f %d\n",j,mid,m1,m2,cnt);
    }
}
