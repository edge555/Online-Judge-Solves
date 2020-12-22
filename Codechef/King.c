#include <stdio.h>
#include <string.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf

#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)

#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)

#define sq(x) ((x)*(x))

#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))

#define endl "\n";
#define line puts("-------");


#ifndef ONLINE_JUDGE
    #define db(x...) cerr << "[" << #x << "] = [", _print(x)
#endif

const int N = 500;
const int MOD = 1000000007;
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int max3(int a,int b,int c)
{
    int r=max(a,b);
    return max(r,c);
}
int lcsof3(char X[],char Y[],char Z[],int m,int n,int o)
{
    int L[m+1][n+1][o+1];
    int i,j,k;
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            for(k=0;k<=o;k++)
            {
                if (i==0 || j==0 || k==0)
                    L[i][j][k]=0;

                else if (X[i-1]==Y[j-1] && X[i-1]==Z[k-1])
                    L[i][j][k]=L[i-1][j-1][k-1]+1;

                else
                    L[i][j][k] = max3(L[i-1][j][k],L[i][j-1][k],L[i][j][k-1]);
            }
        }
    }
    return 3*L[m][n][o];
}
int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt","w",stdout);
    #endif
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        char a[N],b[N],c[N];
        scanf("%s%s%s",a,b,c);
        int tot=strlen(a)+strlen(b)+strlen(c);
        int ans=lcsof3(a,b,c,strlen(a),strlen(b),strlen(c));
        pf("%d\n",tot-ans);
    }
}
