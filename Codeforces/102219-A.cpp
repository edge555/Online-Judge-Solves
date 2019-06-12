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
int incr=0,N;
int a[1001][1001];
vector<char>vec={'<','^','>','v'};
char getcc(int p,int k)
{
    int i=p;
    while(k--)
    {
        i--;
        if(i==-1)
            i=3;
    }
    return vec[i];
}
int main()
{
    int i,j,N;
    string s[1001],c;
    cin>>N>>c;
    rep0(i,N)
        cin>>s[i];
    rep0(i,N)
    {
        rep0(j,N)
        {
            if(s[i][j]=='<')
                a[i][j]=0;
            else if(s[i][j]=='^')
                a[i][j]=1;
            else if(s[i][j]=='>')
                a[i][j]=2;
            else if(s[i][j]=='v')
                a[i][j]=3;
            else
                a[i][j]=-1;
        }
    }
    rep0(i,c.size())
    {
        if(c[i]=='L')
            incr--;
        else
            incr++;
    }
    if(incr<0)
    {
        incr*=-1;
        incr%=4;
        if(incr==1)
        {
            int i,j;
            for(i=0;i<N/2;i++)
            {
                for(j=i;j<N-i-1;j++)
                {
                    int temp=a[i][j];
                    a[i][j]=a[j][N-1-i];
                    a[j][N-1-i]=a[N-1-i][N-1-j];
                    a[N-1-i][N-1-j]=a[N-1-j][i];
                    a[N-1-j][i]=temp;
                }
            }
        }
        else if(incr==2)
        {
            int i,j;
            for(i=0;i<N/2;i++)
            {
                for(j=i;j<N-i-1;j++)
                {
                    int temp=a[i][j];
                    a[i][j]=a[j][N-1-i];
                    a[j][N-1-i]=a[N-1-i][N-1-j];
                    a[N-1-i][N-1-j]=a[N-1-j][i];
                    a[N-1-j][i]=temp;
                }
            }
            for(i=0;i<N/2;i++)
            {
                for(j=i;j<N-i-1;j++)
                {
                    int temp=a[i][j];
                    a[i][j]=a[j][N-1-i];
                    a[j][N-1-i]=a[N-1-i][N-1-j];
                    a[N-1-i][N-1-j]=a[N-1-j][i];
                    a[N-1-j][i]=temp;
                }
            }
        }
        else if(incr==3)
        {
            int i,j;
            for(i=0;i<N/2;i++)
            {
                for(j=i;j<N-i-1;j++)
                {
                    int temp=a[i][j];
                    a[i][j]=a[N-1-j][i];
                    a[N-1-j][i]=a[N-1-i][N-1-j];
                    a[N-1-i][N-1-j]=a[j][N-1-i];
                    a[j][N-1-i]=temp;
                }
            }
        }
        rep0(i,N)
        {
            rep0(j,N)
            {
                if(a[i][j]==-1)
                    pf(".");
                else
                {
                    pf("%c",getcc(a[i][j],incr));
                }
            }
            if(i!=N-1)
                puts("");
        }
    }
    else
    {
        incr%=4;
        if(incr==1)
        {
            int i,j;
            for(i=0;i<N/2;i++)
            {
                for(j=i;j<N-i-1;j++)
                {
                    int temp=a[i][j];
                    a[i][j]=a[N-1-j][i];
                    a[N-1-j][i]=a[N-1-i][N-1-j];
                    a[N-1-i][N-1-j]=a[j][N-1-i];
                    a[j][N-1-i]=temp;
                }
            }
        }
        else if(incr==2)
        {
            int i,j;
            for(i=0;i<N/2;i++)
            {
                for(j=i;j<N-i-1;j++)
                {
                    int temp=a[i][j];
                    a[i][j]=a[N-1-j][i];
                    a[N-1-j][i]=a[N-1-i][N-1-j];
                    a[N-1-i][N-1-j]=a[j][N-1-i];
                    a[j][N-1-i]=temp;
                }
            }
            for(i=0;i<N/2;i++)
            {
                for(j=i;j<N-i-1;j++)
                {
                    int temp=a[i][j];
                    a[i][j]=a[N-1-j][i];
                    a[N-1-j][i]=a[N-1-i][N-1-j];
                    a[N-1-i][N-1-j]=a[j][N-1-i];
                    a[j][N-1-i]=temp;
                }
            }
        }
        else if(incr==3)
        {
            int i,j;
            for(i=0;i<N/2;i++)
            {
                for(j=i;j<N-i-1;j++)
                {
                    int temp=a[i][j];
                    a[i][j]=a[j][N-1-i];
                    a[j][N-1-i]=a[N-1-i][N-1-j];
                    a[N-1-i][N-1-j]=a[N-1-j][i];
                    a[N-1-j][i]=temp;
                }
            }
        }
        rep0(i,N)
        {
            rep0(j,N)
            {
                if(a[i][j]==-1)
                    pf(".");
                else
                {
                    a[i][j]+=incr;
                    a[i][j]%=4;
                    pf("%c",vec[a[i][j]]);
                }

            }
            if(i!=N-1)
                puts("");
        }
    }
}
