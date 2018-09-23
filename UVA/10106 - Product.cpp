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

void multiply(string num1,string num2)
{
    int n1=num1.size();
    int n2=num2.size();
    if (n1==0 || n2==0)
    {
       puts("0");
       return;
    }

    vector<int>result(n1+n2,0);
    int i_n1=0;
    int i_n2=0;
    for (int i=n1-1;i>=0;i--)
    {
        int carry=0;
        int n1=num1[i]-'0';
        i_n2=0;
        for (int j=n2-1; j>=0; j--)
        {
            int n2=num2[j]-'0';
            int sum=n1*n2+result[i_n1 +i_n2]+carry;
            carry=sum/10;
            result[i_n1+i_n2]=sum%10;
            i_n2++;
        }
        if (carry>0)
            result[i_n1+i_n2]+=carry;
        i_n1++;
    }

    int i=result.size()-1;
    while(i>=0 && result[i]==0)
        i--;
    if(i==-1)
    {
       puts("0");
       return;
    }

    while (i>=0)
        cout<<result[i--];
    puts("");
}
int main()
{
    string a,b;
    while(cin>>a>>b)
        multiply(a,b);
}
