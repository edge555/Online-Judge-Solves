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
#define fr freopen("30000.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
string a[10],b[200];
unordered_map<string,char>mp;
int main()
{
    FAST;
    mp[".***.*...**...*******...**...**...*"]='A';
    mp["****.*...**...*****.*...**...*****."]='B';
    mp[".***.*...**....*....*....*...*.***."]='C';
    mp["****.*...**...**...**...**...*****."]='D';
    mp["******....*....****.*....*....*****"]='E';
    mp["******....*....****.*....*....*...."]='F';
    mp[".***.*...**....*....*..***...*.***."]='G';
    mp["*...**...**...*******...**...**...*"]='H';
    mp[".***...*....*....*....*....*...***."]='I';
    mp["..***...*....*....*....*.*..*..**.."]='J';
    mp["*...**..*.*.*..**...*.*..*..*.*...*"]='K';
    mp["*....*....*....*....*....*....*****"]='L';
    mp["*...***.***.*.**.*.**...**...**...*"]='M';
    mp["*...**...***..**.*.**..***...**...*"]='N';
    mp[".***.*...**...**...**...**...*.***."]='O';
    mp["****.*...**...*****.*....*....*...."]='P';
    mp[".***.*...**...**...**.*.**..*..**.*"]='Q';
    mp["****.*...**...*****.*.*..*..*.*...*"]='R';
    mp[".*****....*.....***.....*....*****."]='S';
    mp["*****..*....*....*....*....*....*.."]='T';
    mp["*...**...**...**...**...**...*.***."]='U';
    mp["*...**...**...**...*.*.*..*.*...*.."]='V';
    mp["*...**...**...**.*.**.*.**.*.*.*.*."]='W';
    mp["*...**...*.*.*...*...*.*.*...**...*"]='X';
    mp["*...**...*.*.*...*....*....*....*.."]='Y';
    mp["*****....*...*...*...*...*....*****"]='Z';
    int i,j,k=0;
    string c,d="";
    rep0(i,7)
    {
        cin>>a[i];
        a[i]+='.';
        b[i]="";
    }
    rep0(i,7)
    {
        c=a[i];
        k=0;
        for(j=0;j<c.size();j+=6)
        {
            d.clear();
            d=c.substr(j,5);
            b[k]+=d;
            k++;
        }
    }
    rep0(i,k)
        cout<<mp[b[i]];
}
