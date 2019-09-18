#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define pii pair<int,int>
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;

using namespace std;
int main()
{
    int n,k,ans,i;
    sff(n,k);
    int ara[n+1];
    priority_queue<pii>pq;

    for(i=1;i<=n;++i)
    {
        cin>>ara[i];
        pq.push({ara[i],i});
    }
    priority_queue<int>q;
    ans=0;
    for (i=0;i<k;i++)
    {
        pii p=pq.top();
        pq.pop();
        ans+=p.first;
        q.push(-p.second);
        cout<<-p.second<<endl;
    }
    pf("%d\n",ans);
    int temp=0;
    while(!q.empty())
    {
        ans=(-q.top()-temp);
        if(q.size()==1)
            ans=n-temp;
        cout<<ans<<" ";
        temp=-q.top();
        q.pop();
    }
}
