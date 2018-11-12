#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
typedef long long int ll;
using namespace std;
int main()
{
    vector< pair<int,int> >vec;
    int i,x,y,s,n;
    sff(s,n);
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        vec.push_back(make_pair(x,y));
    }
    sort(vec.begin(),vec.end());
    bool chk=false;
    for(i=0;i<n;i++)
    {
        if(s>vec[i].first)
            s+=vec[i].second;
        else
        {
            cout<<"NO"<<endl;;
            chk=true;
            break;
        }
    }
    if(!chk)
        cout<<"YES"<<endl;
}
