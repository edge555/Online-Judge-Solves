#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%lld",&num)
#define sff(num1,num2) scanf("%lld %lld",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define mem(ara) memset(ara,0,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int ara[200001];
int main()
{

    int n,i,k;
    sf(n);
    queue<int>q;

    rep0(i,n)
    {
        sf(k);
        q.push(k);
        ara[k]++;
    }
    while(n--)
    {
        sf(k);
        if(ara[k]==0)
            cout<<"0 ";
        else
        {
            int cnt=1;
            while(q.front()!=k)
            {
                ara[q.front()]--;
                cnt++;
                q.pop();
            }
            ara[q.front()]--;
            q.pop();
            pf("%d ",cnt);
        }
    }

}
