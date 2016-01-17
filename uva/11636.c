#include<stdio.h>
int main()
{
    int i,n,count,c=1;
    while(scanf("%d",&n)) {
        if(n<0) {
            break;
        }
        count=0;
        for(i=1;i<n;i=2*i) {
            count++;
        }
        printf("Case %d: %d\n",c,count);
        c++;
    }
    return 0;
}

