#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
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
#define N 32005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
bool mark[N];
vector<int>prime;
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
int main()
{
    #ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    sieve();
    int n,m;
    while(1)
    {
        sff(n,m);
        if(n+m==0)
            return 0;
        if(n>m)
            swap(n,m);
        vector<int>vec;
        int i=0;
        while(1)
        {
            if(prime[i]>m)
                break;
            int cnt=0,j;
            int diff=prime[i+1]-prime[i];
            j=i+1;
            vec.pb(prime[i]);
            vec.pb(prime[i+1]);
            while(prime[j+1]-prime[j]==diff)
            {
                vec.pb(prime[j+1]);
                cnt++;
                j++;
            }

            if(!cnt)
            {
                i++;
                vec.clear();
            }
            else
            {
                i=j;
                if(vec[vec.size()-1]>m)
                    continue;
                if(vec[0]<n)
                    continue;
                rep0(j,vec.size())
                {
                    pf("%d",vec[j]);
                    if(j!=vec.size()-1)
                        pf(" ");
                }
                puts("");
                vec.clear();
            }
        }
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
