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
int main()
{
    int i,n,k;
    sf(n);
    queue<int>q[45];
    vector<int>vec={4,8,15,16,23,42};
    rep0(i,n)
    {
        sf(k);
        q[k].push(i);
    }
    int ans=0;
    while(1)
    {
        bool chk=true;
        int last=-1,p=0,cnt=0;
        rep0(i,6)
        {
            cnt++;
            if(q[vec[i]].empty())
            {
                chk=false;
                break;
            }
            else
            {
                if(q[vec[i]].front()>last)
                {
                    p++;
                    last=q[vec[i]].front();
                    q[vec[i]].pop();
                }
                else
                {
                    bool found=false;
                    while(1)
                    {
                        if(q[vec[i]].empty())
                            break;
                        else if(q[vec[i]].front()>last)
                        {
                            found=true;
                            p++;
                            q[vec[i]].pop();
                            break;
                        }
                        else
                        {
                            q[vec[i]].pop();
                            ans++;
                        }
                    }
                    if(!found)
                    {
                        chk=false;
                        break;
                    }
                }
            }
        }
        if(p!=6)
            ans+=cnt-1;
        if(chk==false)
            break;
    }
    rep0(i,6)
        ans+=q[vec[i]].size();
    pf("%d",ans);
}
