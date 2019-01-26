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
    int tc,j=1;
    sf(tc);
    while(tc--)
    {
        int n,m,k;
        sff(n,m);
        priority_queue<int>pq;
        while(m--)
        {
            sf(k);
            pq.push(k);
        }
        int cnt=0;
        while(1)
        {
            if(pq.empty())
                break;
            if(n<=0)
                break;
            n-=pq.top();
            pq.pop();
            cnt++;
        }
        pf("Scenario #%d:\n",j++);
        if(n>0)
            pf("impossible\n\n");
        else
            cout<<cnt<<"\n\n";
    }
}
