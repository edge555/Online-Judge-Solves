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
#define N 101
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
vector<int>prime;
unordered_map<int,int>mp;
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
    prime.pb(2);
    for(i=3;i<N;i+=2)
    {
        if(mark[i])
            prime.pb(i);
    }
}
void primefact(int n)
{
    int i;
    while(n%2==0)
    {
        mp[2]++;
        n/=2;
    }
    for(i=0;prime[i]<=n && i<prime.size();i++)
    {
        while(n%prime[i]==0)
        {
            n/=prime[i];
            mp[prime[i]]++;
        }
    }
    if(n>2)
        mp[prime[i]]++;
}
int main()
{
    sieve();
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,n,k;
        sf(n);
        mp.clear();
        rep0(i,n)
        {
            sf(k);
            if(k!=1)
            {
                if(mark[k])
                    mp[k]++;
                else
                    primefact(k);
            }
        }
        bool chk=true;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->se&1)
            {
                chk=false;
                break;
            }
        }
        puts(chk?"YES":"NO");
    }
}
