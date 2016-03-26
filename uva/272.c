#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,i,length,len;
    char str[100];
    while(scanf("%[^\n]",str)==1) {
        getchar();
        /*count=0;*/
        len=strlen(str);
        for(i=0;i<len;i++) {
            if(str[i] != '"')
                printf("%c",str[i]);
            else if(str[i] == '"') {
                count++;
                if(count%2 != 0) {
                    /*str[i]=96;
                    str[i]=96;*/
                    printf("``");
                }
                else {
                    /*str[i]=39;
                    str[i]=39;*/
                    printf("''");
                }
            }
        }
        /*printf("%s\n",str);*/
        printf("\n");
    }
    return 0;
}

