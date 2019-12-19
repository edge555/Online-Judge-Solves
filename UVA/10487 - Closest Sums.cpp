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
int main()
{
    int t=1,n;
    while(1)
    {
        sf(n);
        if(n==0)
            return 0;
        int i,j,q,k;
        vector<int>vec,vec2;
        rep0(i,n)
        {
            sf(k);
            vec.pb(k);
        }
        rep0(i,n-1)
        {
            reps(j,i+1,n-1)
                vec2.pb(vec[i]+vec[j]);
        }
        sort(all(vec2));
        sf(q);
        pf("Case %d:\n",t++);
        while(q--)
        {
            sf(k);
            int ind=lower_bound(all(vec2),k)-vec2.begin();
            int ind2=ind+1,ind3=0;
            if(ind)
                ind3=ind-1;
            int x,diff=1e9;
            if(abs(k-vec2[ind])>abs(k-vec2[ind2]))
            {
                diff=abs(k-vec2[ind2]);
                x=vec2[ind2];
            }
            else
            {
                diff=abs(k-vec2[ind]);
                x=vec2[ind];
            }
            if(abs(k-vec2[ind3]<diff))
                x=vec2[ind3];
            pf("Closest sum to %d is %d.\n",k,x);
        }
    }
}
