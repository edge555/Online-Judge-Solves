#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
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
int main()
{
    int tc,t;
    sf(tc);
    rep(t,tc)
    {
        int i,j,n,m;
        sff(n,m);
        getchar();
        string a[n+1];
        rep0(i,n)
            cin>>a[i];
        set<string>st;
        set<string>::iterator it;
        rep0(i,n)
        {
            j=0;
            while(j<m)
            {
                string b="";
                while(a[i][j]=='X')
                {
                    if(j==m-1)
                        break;
                    j++;
                }
                while(j<m)
                {
                    if(j==m-1 || a[i][j]=='X')
                    {
                        if(a[i][j]!='X')
                            b+=a[i][j];
                        if(b.size()>1)
                            st.insert(b);
                        break;
                    }
                    else
                        b+=a[i][j];
                    j++;
                }
                j++;
            }
        }
        rep0(j,m)
        {
            i=0;
            while(i<n)
            {
                string b="";
                while(a[i][j]=='X')
                {
                    if(i==n-1)
                        break;
                    i++;
                }
                while(i<n)
                {
                    if(i==n-1 || a[i][j]=='X')
                    {
                        if(a[i][j]!='X')
                            b+=a[i][j];
                        if(b.size()>1)
                            st.insert(b);
                        break;
                    }
                    else
                        b+=a[i][j];
                    i++;
                }
                i++;
            }
        }
        pf("Case %d: ",t);
        cout<<*st.begin()<<endl;
    }
}
