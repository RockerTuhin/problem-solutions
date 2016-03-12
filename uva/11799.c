#include<stdio.h>
int main()
{
    int i,t_case,t,n,max;
    scanf("%d",&t_case);
    for(i=1;i<=t_case;i++) {
        scanf("%d",&t);
        max=0;
        while(t--) {
            scanf("%d",&n);
            if(n > max)
                max=n;
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}
