#include<stdio.h>
int main()
{
    unsigned long long n,last_num,result;
    while(scanf("%llu",&n)==1) {
        last_num=(n*(n+2))/2;
        result=(last_num*3)-6;
        printf("%llu\n",result);
    }
    return 0;
}
