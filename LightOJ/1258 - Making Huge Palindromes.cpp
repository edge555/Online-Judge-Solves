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
#define N 1000005
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
int fail[N];
void failure(string a)
{
    int i=1,j=0;
    fail[0]=0;
    while(i<a.size())
    {
        if(a[i]==a[j])
        {
            j++;
            fail[i]=j;
            i++;
        }
        else
        {
            if(j>0)
                j=fail[j-1];
            else
            {
                fail[i]=0;
                i++;
            }
        }
    }
}
int kmp(string text,string pat)
{
    int i=0,j=0;
    while(i<text.size())
    {
        if(text[i]==pat[j])
        {
            i++;
            j++;
            if(j==pat.size())
                j=fail[j-1];
        }
        else
        {
            if(j)
                j=fail[j-1];
            else
                i++;
        }
    }
    return j;
}
int main()
{
    FAST;
    string a,b;
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        cin>>a;
        b=a;
        reverse(all(b));
        cout<<"Case "<<t<<": ";
        if(b==a)
        {
            cout<<a.size()<<endl;
            continue;
        }
        failure(b);
        int i,ind=kmp(a,b);
        cout<<a.size()+b.size()-ind<<endl;
    }
}
