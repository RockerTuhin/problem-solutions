#include<stdio.h>
int main()
{
    long int n,remainder,quotient;
    int bin[100],i,j,sum;
    while(scanf("%ld",&n) == 1 && n != 0) {
        i=0;
        sum=0;
        quotient=n;
        while(quotient != 0) {
            bin[i++]=quotient % 2;
            quotient=quotient/2;
        }
        printf("The parity of ");
        for(j=i-1;j>=0;j--) {
            printf("%d",bin[j]);
            sum=sum+bin[j];
        }
        printf(" is %d (mod 2).\n",sum);
    }
    return 0;
}
