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

int main ()
{
    char ara[100000];
    int a,b,c,i,j,k,n;
    sf(n);
    getchar();
    rep(i,n)
    {
         while(gets(ara))
         {
            if(strlen(ara)==0)
                break;
            for (j=0;ara[j]!='\0';j++)
            {
                if (ara[j]=='1')
                    ara[j]='I';
                else if (ara[j]=='2')
                    ara[j]='Z';
                else if (ara[j]=='3')
                    ara[j]='E';
                else if (ara[j]=='4')
                    ara[j]='A';
                else if (ara[j]=='5')
                    ara[j]='S';
                else if (ara[j]=='6')
                    ara[j]='G';
                else if (ara[j]=='7')
                    ara[j]='T';
                else if (ara[j]=='8')
                    ara[j]='B';
                else if (ara[j]=='9')
                    ara[j]='P';
                else if (ara[j]=='0')
                    ara[j]='O';
                cout<<ara[j];
            }
            puts("");
        }
        if(i!=n)
            puts("");
        }
}
