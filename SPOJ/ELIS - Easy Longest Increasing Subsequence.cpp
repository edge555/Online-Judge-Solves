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

int CeilIndex(vector<int>v,int l,int r,int key)
{
    while (r-l>1)
    {
        int m=l+(r-l)/2;
        if (v[m]>=key)
            r=m;
        else
            l=m;
    }
    return r;
}

int lis(vector<int>v)
{
    if (v.size()==0)
        return 0;

    vector<int>tail(v.size(),0);
    int length = 1;
    tail[0] = v[0];
    for (int i=1;i<v.size();i++)
    {
        if (v[i] < tail[0])
            tail[0] = v[i];

        else if (v[i] > tail[length-1])
            tail[length++] = v[i];

        else
            tail[CeilIndex(tail, -1, length-1, v[i])] = v[i];
    }

    return length;
}

int main()
{
    int n,k;
    sf(n);
    vector<int>vec;
    while(n--)
    {
        sf(k);
        vec.pb(k);
    }
    cout<<lis(vec);
}
