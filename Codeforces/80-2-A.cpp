#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
#define N 100
bool mark[N];
int ara[N];
void seive()
{
    int i;
    memset(mark,true,sizeof(mark));

    for(i=4;i<N;i+=2)
        mark[i]=false;


    for(i=3;i*i<N;i++)
    {
        if(mark[i])
        {
            for(int j=i*i;j<N;j+=i*2)
                mark[j]=false;
        }
    }
}
int main()
{
    seive();
    int i;
    queue<int>q;
    reps(i,2,51)
    {
        if(mark[i])
            q.push(i);
    }
    int n,m;
    sff(n,m);
    while(q.front()!=n)
        q.pop();
    q.pop();
    if(q.front()==m)
        puts("YES");
    else
        puts("NO");
}
