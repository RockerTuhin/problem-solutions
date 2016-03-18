#include<stdio.h>
int main()
{
    int n,i,j,quotient;
    int ternary[100];
    while(scanf("%d",&n) ==1) {
        if(n < 0)
            break;
        if(n == 0)
            printf("0");
        quotient=n;
        i=0;
        while(quotient != 0) {
            ternary[i++]=quotient % 3;
            quotient=quotient/3;
        }
        for(j=i-1;j>=0;j--) {
            printf("%d",ternary[j]);
        }
        printf("\n");
    }
    return 0;
}
