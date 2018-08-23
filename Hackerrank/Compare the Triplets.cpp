#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define MOD 1000000007
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int i,a=0,b=0,k;
    queue<int>q;
    for (i=0;i<3;i++)
    {
        sf(k);
        q.push(k);
    }
    while(!q.empty())
    {
        sf(k);
        if(k>q.front())
            b++;
        else if(k<q.front())
            a++;
        q.pop();
    }
    pf("%d %d\n",a,b);
}
