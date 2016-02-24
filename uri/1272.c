#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,len,count;
    char str[100];
    scanf("%d",&t);
    getchar();
    while(t--) {
        gets(str);
        count=0;
        len=strlen(str);
        for(i=0;i<len;i++) {
            if(str[i] == 32) {
                count=0;
                continue;
            }
            else {
                count++;
                if(count == 1)
                    printf("%c",str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
