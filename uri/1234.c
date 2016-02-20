#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,count;
    char str[1000];
    while(scanf("%[^\n]",&str) == 1) {
        getchar();
        count=0;
        len=strlen(str);
        for(i=0;i<len;i++) {
            if(str[i] != 32) {
                count++;
                if(count % 2 != 0) {
                    if(str[i] >= 'a' && str[i] <= 'z')
                        str[i]=str[i]-32;
                }
                else {
                    if(str[i] >= 'A' && str[i] <= 'Z')
                        str[i]=str[i]+32;
                }
            }
        }
        printf("%s\n",str);
    }
    return 0;
}
