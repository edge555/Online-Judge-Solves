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
#define fr freopen("input.in","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
int main()
{
    unordered_map<char,char>mp;
    string a[7],b;
    int i,j;
    a[0]="ejp mysljylc kd kxveddknmc re jsicpdrysi";
    a[1]="rbcpc ypc rtcsra dkh wyfrepkym veddknkmkrkcd";
    a[2]="de kr kd eoya kw aej tysr re ujdr lkgc jv";
    a[3]="our language is impossible to understand";
    a[4]="there are twenty six factorial possibilities";
    a[5]="so it is okay if you want to just give up";
    mp['q']='z';
    mp['z']='q';
    rep0(i,3)
    {
        rep0(j,a[i].size())
            mp[a[i][j]]=a[i+3][j];
    }
    int t,tc;
    cin>>tc;
    cin.ignore();
    rep(t,tc)
    {
        getline(cin,b);
        cout<<"Case #"<<t<<": ";
        rep0(i,b.size())
            cout<<mp[b[i]];
        cout<<endl;
    }
}
