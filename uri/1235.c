#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,len;
    char str[1000],str1[1000];
    scanf("%d",&t);
    getchar();
    while(t--) {
        scanf("%[^\n]",&str);
        getchar();
        len=strlen(str);
        if(len % 2 == 0) {
            for(i=(len/2)-1,j=0;i>=0;i--,j++) {
                str1[j]=str[i];
            }
            for(i=(len/2),j=len-1;i<len;i++,j--) {
                str1[i]=str[j];
            }
            str1[i]='\0';
            printf("%s\n",str1);
        }
    }
    return 0;
}
