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
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int main()
{
    int n,i,k;
    queue<int>q;
    sf(n);
    rep0(i,n)
    {
        sf(k);
        q.push(k);
    }

    if(q.front()!=25)
    {
        pf("NO");
        return 0;
    }
    q.pop();
    int t5=1,fif=0;
    while(!q.empty())
    {
        int p=q.front();
        if(p==25)
            t5++;
        else
        {
            if(p==50)
            {
                if(t5==0)
                {
                    pf("NO");
                    return 0;
                }
                else
                {
                    t5--;
                    fif++;
                }
            }
            else
            {
                if(t5==0)
                {
                    pf("NO");
                    return 0;
                }
                t5--;
                if(fif==0)
                {
                    if(t5<2)
                    {
                        pf("NO");
                        return 0;
                    }
                    else
                        t5-=2;
                }
                else
                    fif--;
            }
        }
        q.pop();
    }
    pf("YES");
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
