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
#define mem(ara) memset(ara,0,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define autto for(auto it=mp.begin();it!=mp.end();it++)
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int i,ara[50005];
bool ara2[1000010];
int chk(int a,int b)
{
    int ans=0;
    for(i=a;i<=b;i++)
    {
        if(ara2[ara[i]]==false)
            ans++;
        ara2[ara[i]]=true;
    }
    for(i=a;i<=b;i++)
        ara2[ara[i]]=false;
    return ans;
}
int main()
{
    int n,m;
    sff(n,m);
    rep0(i,n)
        sf(ara[i]);
    int a,b;
    char ch;
    while(m--)
    {
        cin>>ch;
        sff(a,b);
        if(ch=='Q')
        {
            b--;
            int k=chk(a,b);
            pf("%d\n",k);
        }
        else
            ara[a]=b;
    }
    //cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
}
