#include<stdio.h>
#include<string.h>
int main()
{
    int t,len,i,j,max;
    char str[200];
    scanf("%d",&t);
    getchar();
    while(t--) {
        gets(str);
        len=strlen(str);
        int count[26]={0};
        for(i=0;i<len;i++) {
            if(str[i] >= 65 && str[i] <=90)
                str[i]=str[i]+32;
            count[str[i]-'a']++;
        }
        max=count[0];
        for(i=97,j=0;i<=122;i++,j++) {
            if(count[j] > max)
                max=count[j];
        }
        //printf("%d\n",max);
        for(i=97,j=0;i<=122;i++,j++) {
            if(count[j] == max) {
                printf("%c",i);
            }
        }
        printf("\n");
    }
    return 0;
}
