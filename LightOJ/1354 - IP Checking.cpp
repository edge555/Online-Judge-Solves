#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define MOD 1000000007
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int num(string a)
{
    int i,k=0;
    for(i=0;i<a.size();i++)
    {
        k*=10;
        k+=a[i]-'0';
    }
    return k;
}
int main()
{
    int tc,j,cnt;
    sf(tc);
    getchar();
    int ara[]={128,64,32,16,8,4,2,1};
    for (j=1;j<=tc;j++)
    {
        int i,k;
        string a,b,p;
        cin>>a>>b;
        queue<string>q;
        for (i=0;i<a.size();i++)
        {
            if(a[i]!='.')
                p.pb(a[i]);
            if(a[i]=='.' || i==a.size()-1)
            {
                q.push(p);
                p.clear();
            }
        }
        string res="";
        while(!q.empty())
        {
            i=0,cnt=8;
            string s=q.front(),bn="";
            int n=num(s);
            while(n!=0)
            {
                if(n>=ara[i])
                {
                    n-=ara[i];
                    bn.pb('1');
                }
                else
                    bn.pb('0');
                i++;
            }
            if(bn.size()!=8)
            {
                for (int z=0;z<8-bn.size();i++)
                    bn.pb('0');
            }
            res+=bn;
            if(q.size()>=2)
                res.pb('.');
            q.pop();
        }
        bool chk=true;
        for (i=0;i<res.size();i++)
        {
            if(b[i]!=res[i])
            {
                chk=false;
                break;
            }
        }
        pf("Case %d: ",j);
        if(chk)
            puts("Yes");
        else
            puts("No");
    }
}
