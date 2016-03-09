#include<stdio.h>
int main()
{
    int i,n1,n2,count,max,k,temp;
    while (scanf("%d %d",&n1,&n2) == 2) {
        max=0;
        printf("%d %d",n1,n2);
        if(n1>n2) {
            temp=n2;
            n2=n1;
            n1=temp;
        }
        for(i=n1;i<=n2;i++) {
            count=1;
            k=i;
            while(k > 1) {
                if(k%2 == 0)
                    k=k/2;
                else
                    k=(k*3)+1;
                count++;
            }
            if(count >= max)
                max=count;
        }
        printf(" %d\n",max);
    }
    return 0;
}
