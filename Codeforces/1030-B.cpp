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

float area(int x1,int y1,int x2,int y2,int x3,int y3)
{
    return abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0);
}

bool check(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int x,int y)
{
    float A=area(x1,y1,x2,y2,x3,y3)+area(x1,y1,x4,y4,x3,y3);
    float A1=area(x,y,x1,y1,x2,y2);
    float A2=area(x,y,x2,y2,x3,y3);
    float A3=area(x,y,x3,y3,x4,y4);
    float A4=area(x,y,x1,y1,x4,y4);

    return (A==A1+A2+A3+A4);
}
int main()
{
    int x,y,d,n,k;
    sff(n,d);
    sf(k);
    while(k--)
    {

        sff(x,y);
        if (check(n-d,n,n,n-d,d,0,0,d,x,y))
            puts("YES");
        else
            puts("NO");
    }
}
