#include<stdio.h>
int main()
{
    int t,n,sum,div;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        sum=abs((((((n*567)/9)+7492)*235)/47)-498);
        div=sum/10;
        printf("%d\n",div%10);

    }
    return 0;
}
