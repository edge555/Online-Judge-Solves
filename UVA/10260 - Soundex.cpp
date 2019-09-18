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
#define fw freopen("Output.odt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int main()
{
    unordered_map<char,int>mp;
    mp['A']=0,mp['B']=1,mp['C']=2,mp['D']=3;
    mp['E']=0,mp['F']=1,mp['G']=2,mp['H']=0;
    mp['I']=0,mp['J']=2,mp['K']=2,mp['L']=4;
    mp['M']=5,mp['N']=5,mp['O']=0,mp['P']=1;
    mp['Q']=2,mp['R']=6,mp['S']=2,mp['T']=3;
    mp['U']=0,mp['V']=1,mp['W']=0;
    mp['X']=2,mp['Y']=0,mp['Z']=2;
    string a;
    while(cin>>a)
    {
        vector<int>vec;
        int i;
        rep0(i,a.size())
            vec.pb(mp[a[i]]);
        int prev=-1;
        rep0(i,vec.size())
        {
            if(vec[i] && vec[i]!=prev)
                pf("%d",vec[i]);
            prev=vec[i];
        }
        puts("");
    }
}
