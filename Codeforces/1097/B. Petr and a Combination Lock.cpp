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
#define N 1000
#define vi vector<int>
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,vi >
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int dx[20],n;
void bfs()
{
    vector<int>vec;
    vector<int>::iterator it;
    queue<pi>q;
    q.push({0,vec});
    while(!q.empty())
    {
        pi qq=q.front();
        q.pop();
        int k=qq.fi,i;
        vi v=qq.se;
        if(k%360==0 && v.size()==n)
        {
            pf("YES");
            return;
        }
        rep0(i,n)
        {
            it=find(all(v),i);
            if(it==v.end())
            {
                vi v2=v;
                v2.pb(i);
                int x=k+dx[i];
                int y=k-dx[i];
                q.push({x,v2});
                q.push({y,v2});
                break;
            }
        }

    }
    pf("NO");
}
int main()
{
    int i,k,sum=0;
    sf(n);
    rep0(i,n)
    {
        sf(dx[i]);
        sum+=dx[i];
    }
    if(sum%360==0)
    {
        pf("YES");
        return 0;
    }
    bfs();
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
