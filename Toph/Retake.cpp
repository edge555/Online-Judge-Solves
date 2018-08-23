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

bool comp(pair<double,double> &a,pair<double,double> &b)
{
    return ((a.first-a.second)<(b.first-b.second));
}
int main()
{
    int n,k,i;
    cin>>n>>k;
    vector<pair<double,double> >vec;
    double a,b,sum2=0;
    for (i=0;i<n;i++)
    {
        cin>>a>>b;
        vec.pb(make_pair(a,b));
        sum2+=a;
    }
    sort(vec.begin(),vec.end(),comp);
    double sum=0;
    for (i=0;i<vec.size();i++)
    {
        bool retk=false;
        if(k!=0)
        {
            if(vec[i].second>vec[i].first)
            {
                k--;
                sum+=vec[i].second;
                retk=true;
            }
        }
        if(retk==false)
                sum+=vec[i].first;
    }
    sum=max(sum,sum2);
    pf("%.2f\n",sum/n);
}
