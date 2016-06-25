#include<stdio.h>
int main()
{
    int n,sum,rem;
    while(scanf("%d",&n) == 1 && n != 0) {
        while(n % 10 != n) {
            sum=0;
            while(n) {
                rem=n%10;
                sum=sum+rem;
                n=n/10;
            }
            n=sum;
        }
        printf("%d\n",n);
    }
    return 0;
}
