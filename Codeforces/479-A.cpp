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
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
        int a,b,c,cnt=0;

        sfff(a,b,c);
        if (a==1)
            cnt++;
        if (b==1)
            cnt++;
        if (c==1)
            cnt++;

        if (cnt==1)
        {
            if (b==1)
                cout<<max(a,c)*(b+min(a,c))<<endl;
            else if (a==1)
                cout<<(b+1)*c<<endl;
            else if (c==1)
                cout<<a*(b+1)<<endl;
        }
        else if (cnt==3)
            cout<<"3"<<endl;
        else if (cnt==2)
        {
            if (a==1 && b==1)
                cout<<2*c<<endl;
            else if (b==1 && c==1)
                cout<<2*a<<endl;
            else if (a==1 && c==1)
                cout<<2+b<<endl;
        }
        else if (cnt==0)
            cout<<a*b*c<<endl;
}
