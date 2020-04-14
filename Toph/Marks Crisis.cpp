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
#define N 100005
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
int a[N],c[N],d[N];
int bs(int *a,int len,int n)
{
    int right=len,left=0,mid=(left+right)/2;
    while(left<=right)
    {
        if(n>a[mid])
            left=mid+1;
        else if(n<a[mid])
            right=mid-1;
        else
            return mid;
        mid=(left+right)/2;
    }
    return left;
}

int main()
{
    int n,m,i,j,mid,len;
    sf(n);
    m=n;
    for(i=1;i<=n;i++)
    {
        sf(a[i]);
        c[a[i]]=i;
    }
    for(i=1;i<=m;i++)
    {
        sf(a[i]);
        a[i]=c[a[i]];
    }
    d[1]=a[1];
    d[0]=-1;
    len=1;
    for(i=1;i<=m;i++)
    {
        j=bs(d,len,a[i]);
        d[j]=a[i];
        if(j>len)
            len=j;
    }
    pf("%d",len);
}
