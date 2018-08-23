/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {
        int n;
        cin>>n;
        if (n==0)
            break;
        int ara[10000],i,j;
        for (i=0;i<n;i++)
            ara[i]=0;
        for (i=0;i<n-1;i++)
            for (j=0;j<n;j++)
            {
                int a=i+1,b=j+1;
                if (b%a==0)
                    ara[j]=i%2;
            }
        if (ara[n]==1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
