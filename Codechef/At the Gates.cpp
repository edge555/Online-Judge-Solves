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
char flip(char c)
{
    return c=='H'?'T':'H';
}
int main()
{
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        int n,m,i,j,k;
        cin>>n>>m;
        deque<char>dq;
        char ch,ch2;
        rep0(i,n)
        {
            cin>>ch;
            dq.pb(ch);
        }
        int l;
        rep0(i,m)
        {
            ch=dq.back();
            dq.pop_back();
            l=dq.size();
            rep0(j,l)
            {
                ch2=dq.front();
                dq.pop_front();
                if(ch=='H')
                    ch2=flip(ch2);
                dq.pb(ch2);
            }
        }
        int cnt=0;
        while(!dq.empty())
        {
            cnt+=dq.front()=='H';
            dq.pop_front();
        }
        cout<<cnt<<endl;
    }
}
