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
    vector<ll>vec;
    vec.pb(0);
    vec.pb(1);
    ll i,n,k,p;
    for(i=2;;i++)
    {
        k=vec[i-1]+vec[i-2];
        if(k>1000000000)
            break;
        vec.pb(k);
    }

    cin>>n;
    if(binary_search(vec.begin(),vec.end(),n))
    {
        pf("0 0 %d",n);
        return 0;
    }
    queue<ll>q;
    while(1)
    {
        for(i=0;;i++)
        {
            p=vec[i];
            if(p>n)
            {
                p=vec[i-1];
                q.push(p);
                break;
            }
        }
        n-=p;
        if(n==0)
            break;
    }
    if(q.size()>3)
    {
        pf("I'm too stupid to solve this problem");
        return 0;
    }
    if(q.size()==1)
        pf("0 0 ");
    else if(q.size()==2)
        pf("0 ");
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}
