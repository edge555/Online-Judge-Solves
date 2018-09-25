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
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
#define N 1005
bool mark[N];
int ara[N];

void seive()
{
    long long int i;
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
bool calc(int n,vector<int>vec)
{
    int i;

    for(i=0;i<vec.size()-1;i++)
    {

        if(vec[i]+vec[i+1]==n-1)
        {
            return true;
            break;
        }
        if(vec[i]>=n || vec[i+1]>=n)
        {
            return false;
            break;
        }

    }
}
int main()
{
    seive();
    vector<int>vec;
    for(int i=2;i<N;i++)
    {
        if(mark[i])
            vec.pb(i);
    }
    int n,k;
    sff(n,k);
    int i,cnt=0;
    if(n<13 && k==0)
        puts("YES");
    else if(n<13 && k!=0)
        puts("NO");
    else
    {
        for(i=13;i<=n;i++)
        {
            if(!mark[i])
                continue;
            if(calc(i,vec))
                cnt++;
        }
        if(cnt>=k)
            puts("YES");
        else
            puts("NO");
    }
}
