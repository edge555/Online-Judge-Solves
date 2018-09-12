#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int n,i,k;
    sf(n);
    priority_queue<int>pq,pq2;
    rep0(i,n)
    {
        sf(k);
        pq.push(k);
    }
    while(n--)
    {
        sf(k);
        pq2.push(k);
    }
    n=2;
    ll sum=0,sum2=0;
    while(1)
    {
        if(pq.empty() && pq2.empty())
            break;
        int x=0,y=0;
        if(!pq.empty())
            x=pq.top();
        if(!pq2.empty())
            y=pq2.top();

        if(n%2==0)
        {
            if(pq2.empty())
            {
                sum+=x;
                if(!pq.empty())
                    pq.pop();
            }
            else
            {
                if(x>=y)
                {
                    sum+=x;
                    if(!pq.empty())
                        pq.pop();
                }
                else
                    pq2.pop();
            }
        }
        else
        {
            if(pq.empty())
            {
                sum2+=y;
                if(!pq2.empty())
                    pq2.pop();
            }
            else
            {
                if(y>=x)
                {
                    sum2+=y;
                    if(!pq2.empty())
                        pq2.pop();
                }
                else
                    pq.pop();
            }
        }
        n++;
    }
    cout<<sum-sum2;
}
