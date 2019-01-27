#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
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
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define vi vector<int>
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int main()
{
    string ara="",ara2="",res="";
    cin>>ara>>ara2;
    if (ara.length()>ara2.length())
        swap(ara,ara2);
    bool ans=false;
    int l1,l2;
    l1=ara.length();
    l2=ara2.length();

    reverse(ara.begin(),ara.end());
    reverse(ara2.begin(),ara2.end());

    int i,sum,carry=0;
    for (i=0;i<l1;i++)
    {
        sum=((ara[i]-'0')+(ara2[i]-'0')+carry);
        res.push_back((sum%10)+'0');
        carry=sum/10;
        if(carry!=0)
            ans=true;
    }
    for (i=l1;i<l2;i++)
    {
        sum=(ara2[i]-'0')+carry;
        res.push_back((sum%10)+'0');
        carry=sum/10;
        if(carry!=0)
            ans=true;
    }
    if (carry!=0)
        ans=true;
    if(ans)
        puts("Yes");
    else
        puts("No");
}
