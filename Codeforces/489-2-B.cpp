
 #include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int n,m,k,cnt=0,i,j;
    vector<int>vec,vec2;
    sf(n);
    for (i=0;i<n;i++)
    {
        sf(k);
        vec.pb(k);
    }
    sf(m);
    for (i=0;i<m;i++)
    {
        sf(k);
        vec2.pb(k);
    }
    sort(vec.begin(),vec.end());
    sort(vec2.begin(),vec2.end());
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if(abs(vec[i]-vec2[j])<=1)
            {
                cnt++;
                vec2[j]=-1;
                break;
            }
        }
    }
    pf("%d\n",cnt);
}
