#include<stdio.h>
#include<string.h>
int main()
{
    int t,count,i,j,len;
    char str[1000],rev[1000];
    scanf("%d",&t);
    getchar();
    while(t--) {
        scanf("%[^\n]",str);
        getchar();
        len=strlen(str);
        count=0;
        for(i=0;i<len;i++) {
            if(str[i] >= 65 && str[i] <= 122) {
                if(str[i] <= 91 && str[i] >=96)
                    continue;
                str[i]=str[i]+3;
            }
        }
        str[i]='\0';
        for(i=0,j=len-1;i<len+1;i++,j--)
            rev[i]=str[j];
        rev[i]='\0';
        for(i=len/2;i<len;i++)
            rev[i]=rev[i]-1;
        rev[i]='\0';
        printf("%s\n",rev);
    }
    return 0;
}
