#include<stdio.h>
int main()
{
    int t,i,k,a,b,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
       scanf("%d %d",&a,&b);
       sum=0;
       for(k=a;k<=b;k++) {
           if(k%2 != 0) {
               sum=sum+k;
           }
       }
       printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
