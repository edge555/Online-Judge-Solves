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
    int a,b,c;
    while(1)
    {
        sfff(a,b,c);
        if(a+b+c==0)
            return 0;
        vector<int>vec,vec2;
        vec.pb(a);
        vec.pb(b);
        vec.pb(c);
        sort(all(vec));
        if(vec[0]==vec[2])
        {
            if(vec[0]==13)
                pf("*\n");
            else
                pf("%d %d %d\n",vec[0]+1,vec[0]+1,vec[0]+1);
            continue;
        }
        if(vec[0]!=vec[1] && vec[1]!=vec[2])
        {
            pf("1 1 2\n");
            continue;
        }
        int p1,p2,nonmatch;
        if(vec[1]==vec[2])
        {
            nonmatch=vec[0];
            p1=vec[1];
            p2=vec[2];
        }
        else
        {
            nonmatch=vec[2];
            p1=vec[0];
            p2=vec[1];
        }
        if(nonmatch!=13)
        {
            if(nonmatch==12 && p1==13)
            {
                pf("1 1 1\n");
                continue;
            }
            nonmatch++;
            if(nonmatch==p1)
                nonmatch++;
            vec.clear();
            vec.pb(p1);
            vec.pb(p1);
            vec.pb(nonmatch);
            sort(all(vec));
            pf("%d %d %d\n",vec[0],vec[1],vec[2]);
        }
        else
        {
            p1++;
            pf("1 %d %d\n",p1,p1);
        }
    }
}