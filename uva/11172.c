#include<stdio.h>
int main()
{
    long long n1,n2;
    int t;
    scanf("%d",&t);
    while(t--) {
        scanf("%lld %lld",&n1,&n2);
        if(n1 > n2)
            printf(">\n");
        else if(n1 < n2)
            printf("<\n");
        else if(n1 == n2)
            printf("=\n");
    }
    return 0;
}
