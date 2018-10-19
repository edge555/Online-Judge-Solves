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
bool comp(pair<int,int>a,pair<int,int>b)
{
    if(a.second!=b.second)
        return a.second<b.second;
    else
        return a.first>b.first;
}
int main()
{
    string a;
    int space=1;
    while(getline(cin,a))
    {
        vector<pair<int,int> >vec;
        vector<pair<int,int> >::iterator it;
        int i;
        int ara[100000];
        memset(ara,0,sizeof(ara));
        for (i=0;i<a.size();i++)
            ara[a[i]]++;
        for (i=0;i<256;i++)
        {
            if(ara[i]!=0)
                vec.pb(make_pair(i,ara[i]));
        }
        if(space!=1)
            cout<<endl;
        space++;
        sort(vec.begin(),vec.end(),comp);
        for (i=0;i<vec.size();i++)
            cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
}
