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
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int main()
{
    int n,k,i=0;
    sff(n,k);
    string a,b="";
    cin>>a;
    unordered_map<string,int>mp;
    while(1)
    {
        if(b.empty())
        {
            b+=a[i];
            i++;
        }
        else
        {
            if(i==n)
            {
                if(b.size()==k)
                    mp[b]++;
                break;
            }
            else if(b.size()==k)
            {
                mp[b]++;
                b.clear();
            }
            if(b.empty())
            {
                b+=a[i];
                i++;
            }
            else if(a[i]==b[0])
            {
                b+=a[i];
                i++;
            }
            else if(a[i]!=b[0])
            {
                if(b.size()==k)
                    mp[b]++;
                b.clear();
            }
        }
    }
    if(mp.size()==0)
        pf("0");
    else
    {
        int mx=-1;
        for(auto it=mp.begin();it!=mp.end();it++)
            mx=max(mx,it->se);
        pf("%d",mx);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
