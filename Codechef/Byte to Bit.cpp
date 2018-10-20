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
#define MAX 100000
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int multiply(int x,int res[],int res_size)
{
    int carry=0;
    for (int i=0;i<res_size;i++)
    {
        int prod=res[i]*x+carry;
        res[i]=prod%10;
        carry=prod/10;
    }
    while(carry)
    {
        res[res_size]=carry%10;
        carry/=10;
        res_size++;
    }
    return res_size;
}
void power(int x,int n)
{
  int res[MAX];
  int res_size=0;
  int temp=x,i;

    while(temp!=0)
    {
        res[res_size++]=temp%10;
        temp=temp/10;
    }
    for (i=2;i<=n;i++)
        res_size=multiply(x,res,res_size);

    for (i=res_size-1;i>=0;i--)
        cout<<res[i];
}
int main()
{
    int bt[]={1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int nb[]={0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int by[]={0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

    int i,n,k,r,p;
    sf(n);
    while(n--)
    {
        sf(k);
        k--;
        r=k%26;
        p=k/26;
        //db(p);
        if(bt[r]==0)
            pf("0");
        else
        {
            if(p==0)
                pf("1");
            else
                power(2,p);
        }
        pf(" ");
        if(nb[r]==0)
            pf("0");
        else
        {
            if(p==0)
                pf("1");
            else
                power(2,p);
        }

        pf(" ");
        if(by[r]==0)
            pf("0");
        else
        {
            if(p==0)
                pf("1");
            else
                power(2,p);
        }
        puts("");
    }
}
