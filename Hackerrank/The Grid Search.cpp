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
#define N 1001
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
int ara[N][N],ara2[N][N];
int a,b,c,d,aa,bb,cc,dd;
string s[N];
bool match()
{
    return a==aa && b==bb && c==cc && d==dd;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int n1,m1,n2,m2,i,j;
        sff(n1,m1);
        rep0(i,n1)
            cin>>s[i];
        rep0(i,n1)
        {
            rep0(j,m1)
                ara[i][j]=s[i][j]-'0';
        }
        sff(n2,m2);
        rep0(i,n2)
            cin>>s[i];
        rep0(i,n2)
        {
            rep0(j,m2)
                ara2[i][j]=s[i][j]-'0';
        }
        a=ara2[0][0],b=ara2[0][m2-1];
        c=ara2[n2-1][0],d=ara2[n2-1][m2-1];
        bool chk=false;
        rep0(i,n1-n2+1)
        {
            rep0(j,m1-m2+1)
            {
                aa=ara[i][j],bb=ara[i][j+m2-1];
                cc=ara[i+n2-1][j],dd=ara[i+n2-1][j+m2-1];
                if(!match())
                    continue;
                int ii,jj,k=0,l=0,cnt=0;
                reps(ii,i,i+n2-1)
                {
                    reps(jj,j,j+m2-1)
                    {

                        if(ara[ii][jj]==ara2[k][l])
                            cnt++;
                        l++;
                    }
                    k++;
                    l=0;
                }
                if(cnt==n2*m2)
                {
                    chk=true;
                    break;
                }
            }
        }
        puts(chk?"YES":"NO");
    }
}
