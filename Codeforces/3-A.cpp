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
    string a,b;
    cin>>a>>b;
    int x,y,xx,yy;
    x=a[0]-'a';
    y=abs(8-(a[1]-'0'));
    xx=b[0]-'a';
    yy=abs(8-(b[1]-'0'));
    stack<string>s;
    while(1)
    {
        if(x==xx && y==yy)
            break;
        if(xx>x)
        {
            if(yy>y)
            {
                x++;
                y++;
                s.push("RD");
            }
            else if(yy<y)
            {
                x++;
                y--;
                s.push("RU");
            }
            else
            {
                x++;
                s.push("R");
            }
        }
        else if(xx<x)
        {
            if(yy<y)
            {
                x--;
                y--;
                s.push("LU");
            }
            else if(y<yy)
            {
                x--;
                y++;
                s.push("LD");
            }
            else
            {
                x--;
                s.push("L");
            }
        }
        else
        {
            if(yy>y)
            {
                y++;
                s.push("D");
            }
            else if(yy<y)
            {
                y--;
                s.push("U");
            }
        }
    }
    cout<<s.size()<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
