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
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m;
bool comp(int a,int b)
{
    if(a%m==b%m)
    {
        if(abs(a)%2==1 && abs(b)%2==1)
            return a>b;
        else if(abs(a)%2==0 && abs(b)%2==0)
            return b>a;
        else if(abs(a)%2==1)
            return true;
        else
            return false;
    }
    else
        return a%m<b%m;
}
int main()
{
    while(sff(n,m))
    {
        pf("%d %d\n",n,m);
        int k,i;
        if(n==0 && m==0)
            break;
        vector<int>vec;
        rep0(i,n)
        {
            sf(k);
            vec.pb(k);
        }
        sort(all(vec),comp);
        rep0(i,vec.size())
            cout<<vec[i]<<endl;
    }
    return 0;
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
