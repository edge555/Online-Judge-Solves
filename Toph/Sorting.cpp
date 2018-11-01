#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define mem(ara) memset(ara,0,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define autto for(auto it=mp.begin();it!=mp.end();it++)
#define pi pair<float,float>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
bool ara[80];
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        memset(ara,false,sizeof(ara));
        string a;
        int i,j,k;
        cin>>a;
        vector<char>vec,vec2;
        rep0(i,a.size())
        {
            if(a[i]>='0' && a[i]<='9')
            {
                vec.pb(a[i]);
                ara[i]=true;
            }
            else
                vec2.pb(a[i]);
        }
        sort(all(vec));
        sort(all(vec2));
        i=0;j=0;
        rep0(k,a.size())
        {
            if(ara[k]==true)
                cout<<vec[i++];
            else
                cout<<vec2[j++];
        }
        cout<<endl;
    }
}
