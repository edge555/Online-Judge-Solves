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
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
struct node
{
    int pen,team,prob;
};
vector<node>vec;
map<int,int>mp;
int main()
{
    int i,j,n,t,m;
    cin>>n>>t>>m;
    string a,b;
    int pen,team;
    rep0(i,m)
    {
        cin>>pen>>team>>a>>b;
        int prob=a[0]-'A';
        if(b=="Yes")
            vec.pb({pen,team,prob});
    }
    rep0(i,n)
    {
        mp.clear();
        int mx=-1,id=-1;
        rep0(j,m)
        {
            node n=vec[j];
            if(n.prob==i)
            {
                if(mp.find(n.team)==mp.end())
                {
                    mp[n.team]=n.pen;
                    if(n.pen>=mx)
                    {
                        mx=n.pen;
                        id=n.team;
                    }
                }
            }
        }
        cout<<char('A'+i)<<" ";
        if(id==-1)
            cout<<"- -"<<endl;
        else
            cout<<mx<<" "<<id<<endl;
    }
}
