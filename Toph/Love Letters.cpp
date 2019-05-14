#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
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
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
bool mark[N];
void sieve()
{
    int i,j;
    memset(mark,true,sizeof(mark));
    for(i=4;i<N;i+=2)
        mark[i]=false;
    for(i=3;i*i<N;i++)
    {
        if(mark[i])
        {
            for(j=i*i;j<N;j+=i*2)
                mark[j]=false;
        }
    }
    mark[1]=false;
}
int main()
{
    sieve();
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,n;
        sf(n);
        string a;
        cin>>a;
        map<char,int>mp;
        rep0(i,n)
            mp[a[i]]++;
        int cnt=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(mark[it->se])
                cnt++;
        }
        pf("Case %d:\n",t);
        if(cnt==0)
            puts("Love is painful !");
        else
        {
            for(auto it=mp.begin();it!=mp.end();it++)
            {
                if(mark[it->se])
                    cout<<it->fi<<" = "<<it->se<<endl;
            }
        }
    }
}
