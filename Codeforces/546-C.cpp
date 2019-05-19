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
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int n,k;
    deque<int>dq,dqq;
    sf(n);
    int x,y;
    sf(x);
    while(x--)
    {
        sf(k);
        dq.pb(k);
    }
    sf(y);
    while(y--)
    {
        sf(k);
        dqq.pb(k);
    }
    int cnt=0;
    while(1)
    {
        if(dq.empty() || dqq.empty())
            break;
        if(cnt>500 && (!dq.empty() || !dqq.empty()))
        {
            puts("-1");
            return 0;
        }
        int a,b;
        a=dq.front();
        b=dqq.front();
        dq.pop_front();
        dqq.pop_front();
        if(a>b)
        {
            dq.pb(b);
            dq.pb(a);
        }
        else
        {
            dqq.pb(a);
            dqq.pb(b);
        }
        cnt++;
    }
    cout<<cnt;
    if(dq.empty())
        pf(" 2");
    else
        pf(" 1");
}
