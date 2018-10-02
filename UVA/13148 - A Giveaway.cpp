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
    vector<ll>vec={1,64,729,4096,15625,46656,117649,262144,531441,1000000,
    1771561,2985984,4826809,7529536,11390625,16777216,24137569,34012224,
    47045881,64000000,85766121};
    while(1)
    {
        ll n,i;
        cin>>n;
        if(n==0)
            return 0;
        bool chk=false;
        rep0(i,vec.size())
        {
            if(vec[i]==n)
            {
                puts("Special");
                chk=true;
            }
        }
        if(!chk)
            puts("Ordinary");
    }
}
