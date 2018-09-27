#include <bits/stdc++.h>
#include <utility>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int ara[100001];
int main()
{
    memset(ara,0,sizeof(ara));
    int n,x,j;
    sff(n,x);
    queue<pair<int,int> >q;
    int i,a,b,mx;
    rep0(i,n)
    {
        sff(a,b);
        for(j=a;j<=b;j++)
            ara[j]=1;
        q.push(make_pair(a,b));
        mx=b;
    }
    i=1;
    while(!q.empty())
    {
        pair<int,int> p=q.front();
        while(i+x<=p.fi)
            i+=x;
        for(j=i;j<p.fi;j++)
            ara[j]=1;

        i=p.se+1;
        q.pop();
    }
    int cnt=0;
    for(i=1;i<=mx;i++)
    {
        if(ara[i]==1)
            cnt++;
    }
    cout<<cnt;
}
