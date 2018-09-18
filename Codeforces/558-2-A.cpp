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
    int n,k;
    sf(n);
    vector<pair<int,int> >vec,vec2;
    int d,a;
    while(n--)
    {
        sff(d,a);
        if(d<0)
        {
            d*=-1;
            vec2.pb(make_pair(d,a));
        }
        else
            vec.pb(make_pair(d,a));
    }
    sort(all(vec));
    sort(all(vec2));
    queue<pair<int,int> >q,qq;
    pair<int,int>p;
    int i;
    n=1;
    ll sum=0;
    for(i=0;i<vec.size();i++)
        q.push(make_pair(vec[i].fi,vec[i].se));
    for(i=0;i<vec2.size();i++)
        qq.push(make_pair(vec2[i].fi,vec2[i].se));
    if(q.size()>qq.size())
    {
        while(1)
        {
            if(n%2==1 && q.empty())
                break;
            else if(n%2==0 && qq.empty())
                break;
            if(n%2==1)
            {
                p=q.front();
                sum+=p.se;
                q.pop();
            }
            else
            {
                p=qq.front();
                sum+=p.se;
                qq.pop();
            }
            n++;
        }
    }
    else
    {
        while(1)
        {
            if(n%2==1 && qq.empty())
                break;
            else if(n%2==0 && q.empty())
                break;
            if(n%2==1)
            {
                p=qq.front();
                sum+=p.se;
                qq.pop();
            }
            else
            {
                p=q.front();
                sum+=p.se;
                q.pop();
            }
            n++;
        }
    }
    cout<<sum<<endl;
}
