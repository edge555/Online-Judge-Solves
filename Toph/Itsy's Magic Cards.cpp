#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<char,char>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int main()
{
    FAST;
    int n,m,i;
    cin>>n>>m;
    char ch;
    unordered_map<char,int>mp;
    for(ch='A';ch<'A'+n;ch++)
        mp[ch]=0;
    vector<pi>vec;
    char a,b;
    rep0(i,m)
    {
        cin>>a>>b;
        vec.pb({a,b});
        mp[a]++;
        mp[b]++;
    }
    while(1)
    {
        int mx=-1;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->se>mx && it->se)
            {
                ch=it->fi;
                mx=it->se;
            }
        }
        if(mx==-1)
            break;
        mp[ch]=-1;
        rep0(i,m)
        {
            pi pr=vec[i];
            if(pr.fi==ch)
                mp[pr.se]--;
            else if(pr.se==ch)
                mp[pr.fi]--;
        }
    }
    int cnt=0;
    for(auto it=mp.begin();it!=mp.end();it++)
        cnt+=!it->se;
    cout<<cnt;
}
