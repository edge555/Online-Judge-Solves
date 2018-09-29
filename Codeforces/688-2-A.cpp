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
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int e,d;
    string a;
    queue<int>q;
    sff(e,d);
    int i,cnt=0;
    while(d--)
    {
        cin>>a;
        bool chk=false;
        rep0(i,e)
        {
            if(a[i]=='0')
            {
                chk=true;
                break;
            }
        }
        if(chk)
            q.push(1);
        else
            q.push(0);
    }
    int ans=INT_MIN;
    while(!q.empty())
    {
        if(q.front()==1)
            cnt++;
        else
        {
            ans=max(ans,cnt);
            cnt=0;
        }
        q.pop();
    }
    ans=max(ans,cnt);
    cout<<ans;
}
