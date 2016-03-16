#include<stdio.h>
int main()
{
    int t,count;
    long long n,r,sum,temp;
    scanf("%d",&t);
    while(t--) {
        count=0;
        scanf("%lld",&n);
        while(1) {
            sum=0;
            temp=n;
            while(n != 0) {
                r=n % 10;
                n=n/10;
                sum=(sum*10)+r;
            }
            if(temp != sum) {
                n=temp+sum;
                count++;
            }
            if(temp == sum) {
                printf("%d %lld\n",count,temp);
                break;
            }
        }
    }
    return 0;
}
