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
#define N 105
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
int ans[N];
int main()
{
    FAST;
    int tc;
    cin>>tc;
    while(tc--)
    {
        int i,n,k;
        int r,p,s;
        string a;
        cin>>n;
        vector<int>vec;
        cin>>r>>p>>s;
        cin>>a;
        mem(ans,-1);
        int cnt=0;
        rep0(i,a.size())
        {
            if(a[i]=='R')
            {
                if(p)
                {
                    cnt++;
                    p--;
                    ans[i]=2;
                }
            }
            else if(a[i]=='P')
            {
                if(s)
                {
                    cnt++;
                    s--;
                    ans[i]=3;
                }
            }
            else
            {
                if(r)
                {
                    cnt++;
                    r--;
                    ans[i]=1;
                }
            }
        }
        rep0(i,a.size())
        {
            if(ans[i]==-1)
            {
                if(a[i]=='R')
                {
                    if(r)
                    {
                        ans[i]=1;
                        r--;
                    }

                }
                else if(a[i]=='P')
                {
                    if(p)
                    {
                        ans[i]=2;
                        p--;
                    }
                }
                else
                {
                    if(s)
                    {
                        ans[i]=3;
                        s--;
                    }
                }
            }
        }
        int l=n/2;
        if(n&1)
            l++;
        if(cnt>=l)
        {
            cout<<"YES"<<endl;
            rep0(i,a.size())
            {
                if(ans[i]==1)
                    cout<<"R";
                else if(ans[i]==2)
                    cout<<"P";
                else if(ans[i]==3)
                    cout<<"S";
                else
                {
                    if(r)
                    {
                        cout<<"R";
                        r--;
                    }
                    else if(p)
                    {
                        cout<<"P";
                        p--;
                    }
                    else
                    {
                        cout<<"S";
                        s--;
                    }
                }
            }
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
