#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int n;
    while(scanf ("%d",&n)==1)
    {
        set<int>st;
        int i,j;
        int ara[n+1][n+1];

        for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++)
                scanf ("%d",&ara[i][j]);
        }
        int sum,k,a,b,c;
        for (i=0;i<n;i++)
        {
            sum=0;
            for (j=0;j<n;j++)
                sum+=ara[i][j];
            st.insert(sum);

        }
        for (j=0;j<n;j++)
        {
            sum=0;
            for (i=0;i<n;i++)
                sum+=ara[i][j];
            st.insert(sum);
        }
        sum=0;
        int sum2=0;
        for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++)
            {
                if(i==j)
                    sum+=ara[i][j];
                if(i+j+1==n)
                    sum2+=ara[i][j];
            }
        }
        st.insert(sum);
        st.insert(sum2);

        if(st.size()==1)
            puts("YES");
        else
            puts("NO");
        st.clear();
    }
}
