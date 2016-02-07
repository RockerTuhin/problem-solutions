#include<stdio.h>
#include<string.h>
int main()
{
    long long length,a,b,c,d,e,i,flag,value,count=0;
    char str[1000];
    while(scanf("%s",&str)==1) {
        a=b=c=d=e=value=flag=0;
        if(count > 0)
            printf("\n");
        count++;
        length=strlen(str);
        for(i=0;i<length;i++) {
            a=(a*10+str[i]-'0')%4;
            b=(b*10+str[i]-'0')%15;
            c=(c*10+str[i]-'0')%55;
            d=(d*10+str[i]-'0')%100;
            e=(e*10+str[i]-'0')%400;
        }
        if((a == 0 && d != 0) || e == 0) {
            flag=1;
            value=1;
            printf("This is leap year.\n");
        }
        if(b == 0) {
            value=1;
            printf("This is huluculu festival year.\n");
        }
        if(flag == 1 && c == 0) {
            printf("This is bulukulu festival year.\n");
        }
        if (value == 0) {
            printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
