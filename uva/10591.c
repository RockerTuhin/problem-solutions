#include<stdio.h>
int main()
{
    int t,i,r;
    long long n,sum,temp;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%lld",&n);
        temp=n;
        do{
            sum=0;
            while(n != 0) {
                r=n%10;
                n=n/10;
                sum=sum+r*r;
            }
            n=sum;
        }
        while(sum >= 10);
        if(sum == 1)
            printf("Case #%d: %lld is a Happy number.\n",i,temp);
        else
            printf("Case #%d: %lld is an Unhappy number.\n",i,temp);
    }
    return 0;
}
