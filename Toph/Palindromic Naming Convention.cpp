#include <bits/stdc++.h>

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
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
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
        failure(b);
        int i,ind=kmp(a,b);
        int len=b.size()-ind;
        b.clear();
        for(i=0;len;i++,len--)
            b+=a[i];
        reverse(all(b));
        cout<<a<<" "<<b<<endl;
    }
}
