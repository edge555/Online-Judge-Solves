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
char flip(char ch)
{
    return ch=='1'?'0':'1';
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        string a;
        cin>>a;
        int i,n=a.size();
        bool found=true;
        rep0(i,n)
        {
            char ch=a[i];
            if(a[i]=='0')
            {
                found=false;
                while(a[i]==ch && i<n)
                    i++;
                if(i==n)
                    break;
                found=true;
                if(i+1!=n)
                    a[i+1]=flip(a[i+1]);
            }
            else
            {
                ch=a[i];
                i++;
                if(i==n)
                    break;
                found=false;
                while(ch!=a[i] && i<n)
                    i++;
                if(i==n){
                    found=true;
                    break;
                }
                a[i]=flip(a[i]);
                i--;
            }
        }
        puts(found?"WIN":"LOSE");
    }
}
