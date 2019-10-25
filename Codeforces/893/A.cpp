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
int main()
{
    int cur1=1,cur2=2,spec=3;
    int i,n,k;
    sf(n);
    rep0(i,n)
    {
        sf(k);
        if(i==0)
        {
            if(k==1)
                swap(spec,cur2);
            else if(k==2)
                swap(spec,cur1);
            else
            {
                pf("NO");
                return 0;
            }
        }
        else
        {
            if(k==spec)
            {
                pf("NO");
                return 0;
            }
            if(k==cur1)
                swap(cur2,spec);
            else if(k==cur2)
                swap(cur1,spec);
        }
    }
    pf("YES");
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
