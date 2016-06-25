#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,len;
    while(scanf("%[^\n]",str) == 1) {
        getchar();
        len=strlen(str);
        for(i=0;i<len;i++) {
            str[i]=str[i]-7;
        }
        puts(str);
    }
    return 0;
}
