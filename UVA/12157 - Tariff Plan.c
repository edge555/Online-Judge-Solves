#include<stdio.h>
int main ()
{
    int tests,num;
    scanf("%d",&num);
    for(tests=1;tests<=num;tests++)
    {
        int i,calls,p[22];
        int m,j,mile=0,juice=0;
        scanf("%d",&calls);
        for(i=1;i<=calls;i++)
            scanf("%d",&p[i]);

        for(i=1;i<=calls;i++)
        {
            m=((p[i]/30)+1)*10;
            j=((p[i]/60)+1)*15;
            mile+=m;
            juice+=j;
        }
        
        if(mile<juice)
            printf("Case %d: Mile %d\n",tests,mile);
        else if (mile>juice)
            printf("Case %d: Juice %d\n",tests,juice);
        else
            printf("Case %d: Mile Juice %d\n",tests,mile);
    }
    return 0;
}
