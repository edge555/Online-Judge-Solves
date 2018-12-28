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
#define N 25
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m;
int dis[N][N];
unordered_map<string,int>mp;
unordered_map<int,string>mp2;
vector<int>vec;
void reset()
{
    int i,j;
    rep(i,n)
    {
        rep(j,n)
            dis[i][j]=1e9;
    }
    mp.clear();
    mp2.clear();
    vec.clear();
}
void floydwarshall()
{
    int i,j,k;
    rep(k,n)
    {
        rep(i,n)
        {
            rep(j,n)
            {
                if(dis[i][k]+dis[k][j]<dis[i][j])
                    dis[i][j]=dis[i][k]+dis[k][j];
            }
        }
    }
}
int main()
{
    int tc=1;
    while(1)
    {
        sff(n,m);
        if(n+m==0)
            return 0;
        reset();
        string s;
        int i,j,a,b,w;
        rep0(i,n)
        {
            cin>>s;
            mp[s]=i+1;
            mp2[i+1]=s;
        }
        rep0(i,m)
        {
            sfff(a,b,w);
            dis[a][b]=w;
            dis[b][a]=w;
        }
        floydwarshall();
        int ans=1e9;
        rep(i,n)
        {
            int cst=0;
            rep(j,n)
            {
                if(i!=j)
                    cst+=dis[i][j];
            }
            if(cst<ans)
            {
                vec.clear();
                vec.pb(i);
                ans=cst;
            }
            else if(cst==ans)
                vec.pb(i);
        }
        sort(all(vec));
        pf("Case #%d : ",tc++);
        cout<<mp2[vec[0]]<<'\n';
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
