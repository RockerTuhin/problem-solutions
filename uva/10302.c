#include<stdio.h>
#include<math.h>
int main()
{
    long long n,i,sum;
    while(scanf("%lld",&n) == 1) {
        sum=0;
        n=(n*n*(n+1)*(n+1))/4;/*sum of quves from 1 to n=((n*(n+1))/2)^2*/

        /*for(i=1;i<=n;i++) {
            sum=sum+pow(i,3);
        }*/
        printf("%lld\n",n);
    }
    return 0;
}
