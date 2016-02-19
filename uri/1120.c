#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,flag1,flag2,flag3;
    char n,str[1000];
    while(scanf("%c %s",&n,&str) == 2) {
        getchar();
        flag1=flag2=flag3=0;
        len=strlen(str);
        if(n == '0' && len <= 1)
            break;
        for(i=0;i<len;i++) {
            if(str[i] == n)
                continue;
            else {
                if(flag2 == 1) {
                    printf("%c",str[i]);
                    continue;
                }
                if(str[i] > 48) {
                    printf("%c",str[i]);
                    flag2=1;
                    flag3=1;
                }
                flag1=1;
            }
        }
        if(flag1 == 0 || flag2 == 0)
            printf("0");
        printf("\n");
    }
    return 0;
}
