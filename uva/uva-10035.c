#include<stdio.h>
int main()
{
    long a,b,i,j,rem1,rem2,rem3,count,sum,n;
    while(scanf("%ld %ld",&a,&b) == 2) {
        if(a == 0 && b == 0) {
            break;
        }
        count=0;
        rem3=0;
        for(i=a,j=b;i != 0,j != 0;) {
            rem1=i%10;
            rem2=j%10;
            if((rem1+rem2+rem3) >= 10) {
                count++;
            }
            rem3=(rem1+rem2+rem3)/10;
            i=i/10;
            j=j/10;
        }
        if(count == 0) {
            printf("No carry operation.\n");
        }
        else if(count == 1) {
            printf("1 carry operation.\n");
        }
        else {
            printf("%ld carry operations.\n",count);
        }
    }
    return 0;
}
