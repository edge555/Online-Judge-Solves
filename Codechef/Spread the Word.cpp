#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%lld",&num)
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
    int tc,j;
    cin>>tc;
    rep(j,tc)
    {
        ll n,i,k;
        sf(n);
        vector<ll>vec;
        rep0(i,n)
        {
            sf(k);
            vec.pb(k);
        }
        ll sum=vec[0],cnt=0,j,pep=1;
        i=1;
        while(1)
        {
            if(pep>=n)
                break;
            ll p=sum;
            cnt++;
            bool chk=true;
            while(p--)
            {
                if(i!=n-1)
                {
                    sum+=vec[i];
                    i++;
                    pep++;
                }
                else
                {
                    chk=false;
                    break;
                }
            }
            if(!chk)
                break;

        }
        cout<<cnt<<endl;
    }
}
