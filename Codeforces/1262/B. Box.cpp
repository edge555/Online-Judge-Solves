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
int ara[N];
int main()
{
    int t,tc;
    cin>>tc;
    while(tc--)
    {
        mem(ara,0);
        int i,n,k,j=1,mx=-1;
        vector<int>vec,vec2;
        bool chk=true;
        sf(n);
        rep0(i,n)
        {
            sf(k);
            mx=max(mx,k);
            ara[k]++;
            vec2.pb(k);
            if(ara[k]>1)
            {
                while(ara[j])
                    j++;
                vec.pb(j);
                ara[j]++;
            }
            else
                vec.pb(k);
        }
        rep0(i,n)
        {
            if(vec[i]>vec2[i])
            {
                chk=false;
                break;
            }
        }
        if(!chk)
        {
            cout<<"-1"<<endl;
            continue;
        }
        else
        {
            rep0(i,n)
                cout<<vec[i]<<" ";
            nl
        }
    }
}
