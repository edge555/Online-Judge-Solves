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
vector<string>v={" ","January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"};
int month(string s)
{
    vector<string>::iterator it=find(v.begin(),v.end(),s);
    return distance(v.begin(), it);
}
int leap(int y,int yy,int x)
{
	return y/x-yy/x;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int d,dd,y,yy;
		char a[12],b[12];
		scanf("%s %d, %d",a,&d,&y);
        scanf("%s %d, %d",b,&dd,&yy);
        int m,mm;
        m=month(a);
        mm=month(b);
        if(m>2)
            y++;
        if(mm<2 || (mm==2 && dd<29))
            yy--;
        y--;
        int dif=leap(yy,y,4)-leap(yy,y,100)+leap(yy,y,400);
        pf("Case %d: %d\n",t,dif);
    }
}
