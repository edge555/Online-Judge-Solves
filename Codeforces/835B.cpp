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
int main()
{
    ll k,sum=0,i;
    string a;
    cin>>k>>a;
    rep0(i,a.size())
        sum+=a[i]-'0';
    if(sum>=k)
        pf("0");
    else
    {
        sort(all(a));
        ll cnt=0,p=k-sum,i=0;;
        while(p>0)
        {
            ll d=9-(a[i]-'0');
            p-=d;
            i++;
            cnt++;
        }
        cout<<cnt;
    }
}
