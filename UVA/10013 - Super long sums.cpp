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
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
void sum(string ara,string ara2)
{
    string res="";
    int l1,l2;
    l1=ara.length();
    l2=ara2.length();
    if (l1>l2)
        swap(ara,ara2);
    reverse(ara.begin(),ara.end());
    reverse(ara2.begin(),ara2.end());
    int i,sum,carry=0;
    for (i=0;i<l1;i++)
    {
        sum=((ara[i]-'0')+(ara2[i]-'0')+carry);
        res.push_back((sum%10)+'0');
        carry=sum/10;
    }
    for (i=l1;i<l2;i++)
    {
        sum=(ara2[i]-'0')+carry;
        res.push_back((sum%10)+'0');
        carry=sum/10;
    }
    if (carry!=0)
        res.push_back(carry+'0');
    for(i=res.size()-1;i>=0;i--)
        pf("%c",res[i]);
    puts("");
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int n,i;
        sf(n);
        int x,y;
        string a="",b="";
        rep0(i,n)
        {
            sff(x,y);
            a+=x+'0';
            b+=y+'0';
        }
        if(t!=1)
            pf("\n");
        sum(a,b);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
