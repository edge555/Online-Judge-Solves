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
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    string s;
    bool chk=false;
    while(cin>>s)
    {
        deque<char>dq;
        int i,j;
        string a="";
        rep0(i,s.size())
        {
            if(s[i]==']')
            {
                if(chk)
                {
                    for(j=a.size()-1;j>=0;j--)
                        dq.push_front(a[j]);
                }
                else
                {
                    for(j=0;j<a.size();j++)
                        dq.pb(a[j]);
                }
                a="";
                chk=false;
            }
            else if(s[i]=='[')
            {
                if(chk)
                {
                    for(j=a.size()-1;j>=0;j--)
                        dq.push_front(a[j]);
                }
                else
                {
                    rep0(j,a.size())
                        dq.pb(a[j]);
                }
                a="";
                chk=true;
            }
            else
                a+=s[i];
        }
        if(chk)
        {
            for(j=a.size()-1;j>=0;j--)
                dq.push_front(a[j]);
        }
        else
        {
            rep0(j,a.size())
                dq.pb(a[j]);
        }
        a="";
        while(!dq.empty())
        {
            pf("%c",dq.front());
            dq.pop_front();
        }
        pf("\n");
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
