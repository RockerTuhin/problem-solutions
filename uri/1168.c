#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,len,count;
    char str[1000];
    scanf("%d",&t);
    while(t--) {
        count=0;
        scanf("%s",str);
        len=strlen(str);
        for(i=0;i<len;i++) {
            if(str[i] == '1')
                count=count+2;
            if(str[i] == '2' || str[i] =='3' || str[i] == '5')
                count=count+5;
            if(str[i] == '4')
                count=count+4;
            if(str[i] == '6' || str[i] == '9' || str[i] == '0')
                count=count+6;
            if(str[i] == '7')
                count=count+3;
            if(str[i] == '8')
                count=count+7;
        }
        printf("%d leds\n",count);
    }
    return 0;
}
