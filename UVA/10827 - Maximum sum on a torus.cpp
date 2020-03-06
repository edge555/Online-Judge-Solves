#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 80
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
int ara[2*N][2*N];
int temp[N];
int kadane1D(int a[],int n)
{
    int mx,cur,i;
    mx=cur=a[0];
    for(i=1;i<n;i++)
    {
        cur=max(cur,0);
        if(mx<0 && a[i]<0)
        {
            if(mx<a[i])
                mx=a[i];
        }
        else
        {
            cur=cur+a[i];
            mx=max(mx,cur);
        }
    }
    return mx;
}
int kadane2D(int n)
{
    int x,y,sum,maxsum=INT_MIN,i,j,k;
    for(x=1;x<=n;x++)
    {
        for(y=1;y<=n;y++)
        {
            mem(temp,0);
            for(i=x;i<x+n;i++)
            {
                for(j=y,k=0;j<y+n;j++,k++)
                    temp[k]=temp[k]+ara[i][j];
                sum=kadane1D(temp,n);
                if(sum>maxsum)
                    maxsum=sum;
            }
        }
    }
    printf("%d\n",maxsum);
}

int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int n,i,j,k;
        sf(n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                sf(ara[i][j]);
                ara[i+n][j]=ara[i][j+n]=ara[i+n][j+n]=ara[i][j];
            }
        }
        int x,y,sum,maxsum=INT_MIN;
        for(x=1;x<=n;x++)
        {
            for(y=1;y<=n;y++)
            {
                mem(temp,0);
                for(i=x;i<x+n;i++)
                {
                    for(j=y,k=0;j<y+n;j++,k++)
                        temp[k]=temp[k]+ara[i][j];
                    sum=kadane1D(temp,n);
                    maxsum=max(maxsum,sum);
                }
            }
        }
        printf("%d\n",maxsum);
    }
}
