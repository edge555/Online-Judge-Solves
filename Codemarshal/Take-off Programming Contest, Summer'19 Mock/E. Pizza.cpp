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
int ara[10001];
int main()
{
    int n,m,k;
    sff(n,m);
    int i,j,a,b;
    rep0(i,10001)
        ara[i]=INT_MAX;
    vector<int>vec;
    rep0(i,n)
    rep(i,n)
    {
        rep0(j,m)
        {
            sf(k);
            vec.pb(k);
            ara[k]=min(ara[k],i);
        }
    }
    sort(all(vec));
    int q;
    sf(q);
    while(q--)
    {
        sf(k);
        int ind=lower_bound(all(vec),k)-vec.begin();
        if(vec[ind]==k)
            pf("Store %d, Pizza size %d.\n",ara[k],k);
        else
        {
            if(!ind)
            {
                pf("Store %d, Pizza size %d.\n",ara[vec[0]],vec[0]);
                continue;
            }
            int diff=abs(vec[ind]-k),diff2=abs(k-vec[ind-1]);
            int x,y;
            if(diff>diff2)
                pf("Store %d, Pizza size %d.\n",ara[vec[ind-1]],vec[ind-1]);
            else if(diff<diff2)
                pf("Store %d, Pizza size %d.\n",ara[vec[ind]],vec[ind]);
            else
            {
                x=vec[ind];
                y=vec[ind-1];
                if(ara[x]==ara[y])
                    pf("Store %d, Pizza size %d.\n",ara[x],vec[ind]);
                else
                {
                    if(ara[x]>ara[y])
                        pf("Store %d, Pizza size %d.\n",ara[y],vec[ind-1]);
                    else
                        pf("Store %d, Pizza size %d.\n",ara[x],vec[ind]);
                }
            }
        }
    }
}
