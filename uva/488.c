#include<stdio.h>
int main()
{
    int t,n1,n2,i,j,count=0;
    scanf("%d",&t);
    while(t--) {
        /*count=0;*/
        scanf("%d",&n1);
        scanf("%d",&n2);
        while(n2--) {
            if(count>0)
                printf("\n");
            count=1;
            for(i=1;i<=n1;i++) {
                for(j=1;j<=i;j++) {
                    printf("%d",i);
                }
                printf("\n");
            }
            for(i=n1-1;i>=1;i--) {
                for(j=1;j<=i;j++) {
                    printf("%d",i);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
