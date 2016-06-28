#include<stdio.h>
int main()
{
    long long n,sum;
    while(scanf("%lld",&n) == 1 && n >= 0) {
        sum=((n*(n+1))/2)+1;
        printf("%lld\n",sum);
    }
    return 0;
}
