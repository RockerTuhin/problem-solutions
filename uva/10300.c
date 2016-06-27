#include<stdio.h>
int main()
{
    long long t,n,a,b,c,budget;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld",&n);
        budget=0;
        while(n--) {
            scanf("%lld %lld %lld",&a,&b,&c);
            budget=budget+(a*c);
        }
        printf("%lld\n",budget);
    }
    return 0;
}
