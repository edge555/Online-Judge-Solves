#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define MOD 1000000007
#define N 200000
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

bool mark[N];
vector<int>prime;
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
    prime.pb(2);
    for (i=3;i<N;i+=2)
    {
        if(mark[i]==true)
            prime.pb(i);
    }
}
int main()
{
    seive();
    int tc,n;
    sf(tc);
    while(tc--)
    {
        sf(n);
        cout<<prime[--n]<<endl;
    }
}
