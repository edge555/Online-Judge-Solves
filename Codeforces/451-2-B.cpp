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
    int i,n,k;
    sff(n,k);
    vector<int>vec,vec2;
    vec.pb(k);
    vec2.pb(k);
    int prev=k;
    bool sorted=true;
    rep0(i,n-1)
    {
        sf(k);
        if(k<=prev)
            sorted=false;
        vec.pb(k);
        vec2.pb(k);
        prev=k;
    }
    if(sorted)
        puts("yes\n1 1");
    else
    {
        sort(all(vec2));
        int x,y;
        bool chk=false;
        for(i=0;i<vec.size();i++)
        {
            if(vec[i]!=vec2[i])
            {
                if(!chk)
                {
                    x=i;
                    chk=true;
                }
                else
                {
                    puts("no");
                    return 0;
                }
                prev=vec[i];
                i++;
                while(1)
                {
                    if(vec[i]>prev)
                    {
                        y=i-1;
                        break;
                    }
                    prev=vec[i];
                    if(i==vec.size()-1)
                    {
                        y=i;
                        break;
                    }
                    i++;
                }
            }
        }
        for(i=x;i<=y-1;i++)
        {
            if(vec[i]<vec[i+1])
            {
                puts("no");
                return 0;
            }
        }
        if(y==vec.size()-1)
        {
            puts("yes");
            cout<<++x<<" "<<++y;
            return 0;
        }

        if(vec[x]>vec[y+1])
        {
            puts("no");
            return 0;
        }
        puts("yes");
        cout<<++x<<" "<<++y;
    }
}
