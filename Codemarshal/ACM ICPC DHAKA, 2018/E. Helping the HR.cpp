#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
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
    int n;
    while(1)
    {
        sf(n);
        if(n==0)
            return 0;
        getchar();
        int point=0,total;
        char ch,c1,c2,c3,c4,c5,c6;
        int sh,sm,ss,eh,em,es;

        while(n--)
        {
            bool late=false;
            total=0;
            string a;
            getline(cin,a);
            stringstream s(a);
            s>>ch>>c1>>sh>>c2>>sm>>c3>>ss>>c4>>eh>>c5>>em>>c6>>es;
            if(sh<8)
            {
                sh=8;
                sm=30;
                ss=0;
            }
            else if(sh==8)
            {
                if(sm<30)
                {
                    sm=30;
                    ss=0;
                }
            }
            if(ch=='D')
            {

                if(sh==9)
                {
                    if(sm>30)
                        late=true;
                    if(sm==30 && ss!=0)
                        late=true;
                }
                if(sh>9)
                    late=true;
                total+=(60-ss);
                if(sm==59)
                {
                    sm=0;
                    sh++;
                }
                else
                    sm++;
                total+=((60-sm)*60);
                sm=0;
                sh++;
                total+=((eh-sh)*3600);
                total+=(em*60);;
                total+=es;
                if(total<28800 || late)
                    point++;
            }
            else
            {
                if(sh==12)
                {
                    if(sm>30)
                        late=true;
                    if(sm==30 && ss!=0)
                        late=true;
                }
                if(sh>12)
                    late=true;
                total+=((60-sm)*60);
                sm=0;
                sh++;
                total+=((eh-sh)*3600);
                total+=(em*60);
                total+=es;
                if(total<32400 || late)
                    point++;
            }
        }
        if(point==0)
            puts("All OK");
        else if(point<4)
            pf("%d Point(s) Deducted\n",point);
        else
            puts("Issue Show Cause Letter");
    }
}
