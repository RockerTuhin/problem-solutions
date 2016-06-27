#include<stdio.h>
int main()
{
    int t,sum,dif,a,b,max,min;
    scanf("%d",&t);
    while(t--) {
        scanf("%d %d",&sum,&dif);
        if(sum < dif)
            printf("impossible\n");
        else if( (sum+dif) % 2 != 0) {
            printf("impossible\n");
        }

        else {
            a=(sum+dif)/2;
            b=(sum-dif)/2;
            max=a>b?a:b;
            min=a<b?a:b;
            printf("%d %d\n",max,min);
        }
    }
    return 0;
}
