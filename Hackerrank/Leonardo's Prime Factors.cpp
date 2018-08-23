#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define N 1000000
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef unsigned long long ll;
using namespace std;
vector<int>vec;
bool mark[N];
void seive()
{
    long long int i,j;
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
    vec.pb(2);
    for (i=3;i<=N;i+=2)
    {
        if(mark[i])
            vec.pb(i);
    }
}
int primefact(ll n)
{
    ll k=1,cnt=0,i=0;
    while(1)
    {
        if(k>n)
            break;
       if(k*vec[i]<=n)
            cnt++;
       k*=vec[i++];
    }
    return cnt;
}
int main()
{
    seive();
    ll n,tc;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        cout<<primefact(n)<<endl;
    }
}
