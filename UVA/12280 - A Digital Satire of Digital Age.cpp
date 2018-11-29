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
int weight[30];
int main()
{
    weight[0]=2250;weight[1]=2250;weight[2]=2500;weight[3]=2250;weight[4]=2500;
    weight[5]=2500;weight[6]=2750;weight[7]=2250;weight[8]=2500;weight[9]=2500;
    weight[10]=2750;weight[11]=2500;weight[12]=2750;weight[13]=2750;weight[14]=3000;
    weight[15]=2250;weight[16]=2500;weight[17]=2500;weight[18]=2750;weight[19]=2500;
    weight[20]=2750;weight[21]=2750;weight[22]=3000;weight[23]=2500;weight[24]=2750;weight[25]=2750;
    int tc,t;
    sf(tc);
    rep(t,tc)
    {
        string a[10];
        int i,j;
        rep0(i,8)
            cin>>a[i];

        string b="",c="";
        int x=-1,y=-1,xx=-1,yy=-1;
        rep0(i,7)
        {
            rep0(j,18)
            {
                if(a[i][j]=='/')
                {
                    if(j<7)
                    {
                        if(x==-1 && y==-1)
                        {
                            x=i;
                            y=j;
                        }
                    }
                    else
                    {
                        if(xx==-1 && yy==-1)
                        {
                            xx=i;
                            yy=j;
                        }
                    }
                }
                if(a[i][j]>='A' & a[i][j]<='Z')
                {
                    if(j>7)
                        c+=a[i][j];
                    else
                        b+=a[i][j];
                }
            }
        }
        pf("Case %d:\n",t);
        ll p=0,q=0;
        rep0(i,b.size())
            p+=weight[b[i]-'A'];
        rep0(i,c.size())
            q+=weight[c[i]-'A'];

        if(p==q)
        {
            if(x==xx)
                pf("The figure is correct.\n");
            else
            {
                string ans="/";
                ans+=b;
                while(ans.size()!=7)
                    ans+='.';
                ans+="\\||/";
                ans+=c;

                int dot=6-c.size();
                while(dot--)
                    ans+='.';
                ans+='\\';
                pf("........||........\n");
                pf(".../\\...||.../\\...\n");
                pf("../..\\..||../..\\..\n");
                pf("./....\\.||./....\\.\n");
                cout<<ans<<endl;
                pf("\\______/||\\______/\n");
                pf("........||........\n");
            }
        }
        else
        {
            if(p>q)
            {
                if(x>xx)
                    pf("The figure is correct.\n");
                else
                {
                    pf("........||.../\\...\n");
                    pf("........||../..\\..\n");
                    pf(".../\\...||./....\\.\n../..\\..||/");
                    cout<<c;
                    rep0(i,6-c.size())
                        pf(".");
                    pf("\\\n./....\\.||\\______/\n/");
                    cout<<b;
                    rep0(i,6-b.size())
                        pf(".");
                    pf("\\||........\n\\______/||........\n");
                }
            }
            else
            {
                if(x<xx)
                    pf("The figure is correct.\n");
                else
                {
                    pf(".../\\...||........\n");
                    pf("../..\\..||........\n");
                    pf("./....\\.||.../\\...\n/");
                    cout<<b;
                    rep0(i,6-b.size())
                        pf(".");
                    pf("\\||../..\\..\n");
                    pf("\\______/||./....\\.\n");
                    pf("........||/");
                    cout<<c;
                    rep0(i,6-c.size())
                        pf(".");
                    pf("\\\n........||\\______/\n");
                }
            }
        }
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
