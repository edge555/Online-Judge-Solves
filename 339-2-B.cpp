#include <bits/stdc++.h>

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
int n,now;

int main()
{
    int m,i,k;
    sff(n,m);
    queue<int>q;
    rep0(i,m)
    {
        sf(k);
        q.push(k);
    }
    ll cnt=0;
    now=1;
    while(!q.empty())
    {
        int p=q.front();
        if(p>=now && p<=n)
            cnt+=p-now;
        else
            cnt+=(n+p)-now;

        now=p;
        q.pop();
    }
    cout<<cnt;
}
