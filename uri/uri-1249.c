#include<stdio.h>
#include<string.h>
int main()
{
    int i,len;
    char str[100];
    while(gets(str) != '\0') {
        len=strlen(str);
        for(i=0;i<len;i++) {
            if(str[i] >= 97 && str[i] <= 122) {
                if(str[i]+13 > 122) {
                    str[i]=96+((str[i]+13)-122);
                }
                else
                    str[i]=str[i]+13;
            }
            else if(str[i] >= 65 && str[i] <= 90) {
                if(str[i]+13 > 90) {
                    str[i]=64+((str[i]+13)-90);
                }
                else
                    str[i]=str[i]+13;
            }
        }
        printf("%s\n",str);
    }
    return 0;
}
