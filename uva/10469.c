#include<stdio.h>
int main()
{
    long long n,exor,o;
    while(scanf("%lld %lld",&n,&o) == 2) {
        exor=n^o;
        printf("%lld\n",exor);
    }
    return 0;
}

