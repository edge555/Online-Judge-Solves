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
#define mem(ara,vl) memset(ara,vl,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int ara[52];
int chk[55];
int g[55][55];


int main()
{
    for(int i=2;i<51;i++)
    {
        for(int j=2;j<51;j++)
        {
            g[i][j]=__gcd(i,j);
        }
    }
    int t,test;
    sf(test);
    rep(t,test)
    {
        mem(ara,0);
        mem(chk,0);
        int n,i,j;
        sf(n);
        rep0(i,n)
        {
            sf(ara[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(g[ara[i]][ara[j]]==1)
                {
                    chk[i]=1;
                    chk[j]=1;
                }
            }
        }
        int s=0;
        rep0(i,n)
            s+=chk[i];

        if(s==n || n==1)
        {
            cout<<"0\n";
            rep0(i,n)
            {
                if(i!=0)
                    cout<<" ";
                cout<<ara[i];
            }
            cout<<'\n';
        }
        else
        {
            puts("1");
            if(ara[0]!=47)
                ara[0]=47;
            else
                ara[0]=43;
            rep0(i,n)
            {
                if(i!=0)
                    cout<<" ";
                cout<<ara[i];
            }
            cout<<'\n';
        }
    }
}
