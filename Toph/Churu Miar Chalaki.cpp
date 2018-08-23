#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define MOD 1000000007
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int n,m,q,t;
    cin>>n>>m>>q;
    for (t=0;t<q;t++)
    {
        char ch;
        int k,i,j;
        cin>>ch>>k;
        if(ch=='L')
        {
            i=k;
            j=1;
            for (j=1;j<=m;j++)
            {
                pf("(%d,%d)",i,j);
                if(j<m)
                    pf(", ");
                else
                    pf("\n");
            }
        }
        else if(ch=='R')
        {
            i=k;
            j=m;
            for (j=m;j>=1;j--)
            {
                pf("(%d,%d)",i,j);
                if(j>1)
                    pf(", ");
                else
                    pf("\n");
            }
        }
        else if(ch=='D')
        {
            i=n;
            for (j=k;i>=1;i--)
            {
               pf("(%d,%d)",i,j);
                if(i>1)
                    pf(", ");
                else
                    pf("\n");
            }
        }
        else
        {
            j=k;
            for (i=1;i<=n;i++)
            {
               pf("(%d,%d)",i,j);
                if(i<n)
                    pf(", ");
                else
                    pf("\n");
            }
        }
    }
}
