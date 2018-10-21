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
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,n,j;
        sf(n);
        float sum=0;
        map<string,float>mp;
        string a;
        rep0(i,n)
        {
            cin>>a;
            if(mp[a]!=0)
            {
                sum+=mp[a];
                continue;
            }
            bool hand;
            float p=0;
            rep0(j,a.size())
            {
                if(j==0)
                {
                    p+=0.2;
                    if(a[j]=='d' || a[j]=='f')
                        hand=true;
                    else
                        hand=false;
                }
                else
                {
                    if(a[j]=='d' || a[j]=='f')
                    {
                        if(hand)
                            p+=0.4;
                        else
                        {
                            p+=0.2;
                            hand=true;
                        }
                    }
                    else
                    {
                        if(!hand)
                            p+=0.4;
                        else
                        {
                            p+=0.2;
                            hand=false;
                        }
                    }
                }
            }
            //db(p);
            sum+=p;
            p/=2.0;
            mp[a]=p;
        }
        cout<<sum*10<<endl;
    }
}
