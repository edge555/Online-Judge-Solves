#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<char,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.in","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,n,k;
        sf(n);
        char ch;
        queue<pi>tot;
        queue<int>b,o;
        rep0(i,n)
        {
            cin>>ch>>k;
            tot.push({ch,k});
            if(ch=='B')
                b.push(k);
            else
                o.push(k);
        }
        int bx=1,ox=1,cnt=0,desn,deso,desb;
        while(!tot.empty())
        {
            pi p=tot.front();
            ch=p.fi;
            desn=p.se;
            tot.pop();
            deso=-1;
            desb=-1;
            if(!b.empty())
                desb=b.front();
            if(!o.empty())
                deso=o.front();
            while(1)
            {
                bool chk=false;
                if(desb!=-1)
                {
                    if(bx>desb)
                        bx--;
                    else if(bx<desb)
                        bx++;
                    else
                    {
                        if(ch=='B')
                        {
                            bx=desb;
                            b.pop();
                            chk=true;
                        }
                    }
                }
                if(deso!=-1)
                {
                    if(ox>deso)
                        ox--;
                    else if(ox<deso)
                        ox++;
                    else
                    {
                        if(ch=='O')
                        {
                            ox=deso;
                            o.pop();
                            chk=true;
                        }
                    }
                }
                cnt++;
                if(chk)
                    break;
            }
        }
        pf("Case #%d: %d\n",t,cnt);
    }
}
