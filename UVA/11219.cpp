#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n,d,m,y,d1,m1,y1,i,j,k,age;
        scanf ("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d/%d/%d",&d1,&m1,&y1);
            scanf("%d/%d/%d",&d,&m,&y);
            if(d1<d)
                m+=1;
            if(m1<m)
                y+=1;
            age=y1-y;
            if(age<0)
                printf("Case #%d: Invalid birth date\n",i);
            else if(age>130)
                printf("Case #%d: Check birth date\n",i);
            else
                printf("Case #%d: %d\n",i,age);
        }

    return 0;
}
