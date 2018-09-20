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
    int tc;
    sf(tc);
    while(tc--)
    {
        int n,i,k;
        sf(n);
        stack<int>s;
        queue<int>q;
        vector<int>vec;
        rep0(i,n)
        {
            sf(k);
            vec.pb(k);
        }
        bool fr=true,bk=true;
        rep0(i,n)
        {
            sf(k);
            q.push(k);
            s.push(k);
        }
        rep0(i,n)
        {
            k=vec[i];
            if(k>q.front())
                fr=false;
            if(k>s.top())
                bk=false;
            q.pop();
            s.pop();
        }
        if(fr && bk)
            puts("both");
        else if(fr && !bk)
            puts("front");
        else if(!fr && bk)
            puts("back");
        else
            puts("none");
    }
}
