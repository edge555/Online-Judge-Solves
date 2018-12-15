#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
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
void seive()
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
    mark[1]=true;
}
int main()
{
    seive();
    int n,c;
    while(cin>>n>>c)
    {
        int i;
        deque<int>prime;
        prime.pb(1);
        if(n>=2)
            prime.pb(2);
        for(i=3;i<=n;i+=2)
        {
            if(mark[i])
                prime.pb(i);
        }
        int sz=prime.size(),m=c;
        c*=2;
        if(sz%2==1)
            c--;
        bool chk=false;
        while(prime.size()!=c && prime.size()>c)
        {
            if(!chk)
                prime.pop_front();
            else
                prime.pop_back();
            chk==false?chk=true:chk=false;
        }
        pf("%d %d:",n,m);
        while(!prime.empty())
        {
            pf(" %d",prime.front());
            prime.pop_front();
        }
        pf("\n\n");
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
