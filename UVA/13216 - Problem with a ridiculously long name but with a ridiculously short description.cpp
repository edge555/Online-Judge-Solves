#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sll(num) scanf("%lld",&num)
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
#define N 101
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define autto(vec) for(auto it=vec.begin();it!=vec.end();it++)
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int main()
{
    int tc;
    sf(tc);
    while(tc--)
    {
        string a;
        cin>>a;
        if(a.size()==1 && a[0]=='0')
        {
            puts("1");
            continue;
        }
        if(a.size()==1 && a[0]=='1')
        {
            puts("66");
            continue;
        }
        int k=a[a.size()-1]-'0';
        k%=5;
        if(k==1)
            puts("16");
        else if(k==2)
            puts("56");
        else if(k==3)
            puts("96");
        else if(k==4)
            puts("36");
        else if(k==0)
            puts("76");
    }
}
