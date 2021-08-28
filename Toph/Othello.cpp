#include <bits/stdc++.h>
using namespace std;

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

#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()

#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))

#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >

#define endl "\n";
#define line puts("-------");
#define dbb(x) cout<<#x<<" : "<<x<<"\n";

void __print(int x) {cerr << x;} void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;} void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;} void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;} void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;} void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';} void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V> void __print(const pair<T, V> &x)
{cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T> void __print(const queue<T> &x)
{queue<T>temp=x;cerr<<"\n-----\n";while(!temp.empty())
{cerr << temp.front() << endl;temp.pop();}cerr<<"-----\n";}
template<typename T> void __print(const stack<T> &x)
{stack<T>temp=x;cerr<<"\n-----\n";while(!temp.empty())
{cerr << temp.top() << endl;temp.pop();}cerr<<"-----\n";}
template<typename T> void __print(const T &x)
{int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V> void _print(T t, V... v)
{__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef ONLINE_JUDGE
    #define db(x...) cerr << "[" << #x << "] = [", _print(x)
#endif
char ara[10][10];
const int N = 100005;
const int MOD = 1000000007;
using ll = long long;
int gameover=0;
int dx[]={1,1,0,-1,-1,-1,0,1};
int dy[]={0,1,1,1,0,-1,-1,-1};
void pre()
{
    int i,j;

    rep0(i,8)
    {
        rep0(j,8)
            ara[i][j]='.';
    }
    ara[3][3]=ara[4][4]='W';
    ara[3][4]=ara[4][3]='B';
}
void print()
{
    int i,j;
    rep0(i,8)
    {
        rep0(j,8)
        {
            cout<<ara[i][j];
        }
        cout<<endl;
    }
}
bool valid(int x,int y)
{
    return x>=0 && x<8 && y>=0 && y<8;
}
bool turn(int x,int y,char mv)
{
    char ch;
    if(mv=='W')
        ch='B';
    else
        ch='W';
    bool movee=false;
    int i,j,xx,yy;
    rep0(i,8)
    {
        xx=x+dx[i];
        yy=y+dy[i];
        if(!valid(xx,yy) || ara[xx][yy]=='.')
            continue;
        vector<pi>vec;
        while(1)
        {
            if(!valid(xx,yy))
                break;
            if(ara[xx][yy]!=ch)
                break;
            vec.pb({xx,yy});
            xx+=dx[i];
            yy+=dy[i];
        }
        if(!valid(xx,yy))
            continue;
        if(ara[xx][yy]!=mv)
            continue;
        if(vec.size())
        {
            movee=true;
            //cout<<mv<<endl;
            ara[x][y]=mv;
        }
        for(auto p:vec)
            ara[p.fi][p.se]=mv;
    }
    return movee;

}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("1.txt", "r", stdin);
        //freopen("output2.txt","w",stdout);
    #endif
    pre();
    int i,q,r,c,mv=0;
    sf(q);
    bool over=false;
    rep0(i,q)
    {
        sff(r,c);
        //cout<<r<<" "<<c<<endl;

        if(ara[r][c]=='.')
        {
            if(mv&1)
            {
                bool f=turn(r,c,'W');
                if(!f)
                {
                    mv++;
                    bool ff=turn(r,c,'B');
                    if(!ff)
                        over=true;
                    else
                        mv++;
                }
                else
                    mv++;
            }
            else
            {
                bool f=turn(r,c,'B');
                if(!f)
                {
                    mv++;
                    bool ff=turn(r,c,'W');
                    if(!ff)
                        over=true;
                    else
                        mv++;
                }
                else
                    mv++;
            }
        }
        //print();
    }
    print();
}
/*
2
2 3
2 4
*/
