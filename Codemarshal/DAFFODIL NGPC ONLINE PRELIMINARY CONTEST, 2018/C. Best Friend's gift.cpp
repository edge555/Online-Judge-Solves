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
int x,y,z;
int dec(string a)
{
    char *p;
    int n=strtol(a.c_str(),&p,16);
    return n;
}
bool inside(int a,int b,int c)
{
    if(x>=0 && x<=a && y>=0 && y<=b && z>=0 && z<=c)
        return true;
    return false;
}
int main()
{
    int j,tc;
    cin>>tc;
    for (j=1;j<=tc;j++)
    {
        string a;
        cin>>a;
        vector<char>vec;
        queue<int>q;
        for(int i=0;i<a.size();i+=2)
        {
            string b="";
            b.pb(a[i]);
            b.pb(a[i+1]);
            q.push(dec(b));
        }
        x=q.front();
        q.pop();
        y=q.front();
        q.pop();
        z=q.front();
        if(inside(127,0,0))
            vec.pb('A');
        if(inside(127,127,0))
            vec.pb('B');
        if(inside(127,127,127))
            vec.pb('C');
        if(inside(255,0,0))
            vec.pb('D');
        if(inside(255,127,0))
            vec.pb('E');
        if(inside(255,127,127))
            vec.pb('F');
        if(inside(255,255,0))
            vec.pb('G');
        if(inside(255,255,127))
            vec.pb('H');
        if(inside(255,255,255))
            vec.pb('I');
        printf("Case %d:",j);
        for(int i=0;i<vec.size();i++)
            cout<<" "<<vec[i];
        puts("");
    }
}
