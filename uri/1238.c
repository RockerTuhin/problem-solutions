#include<stdio.h>
int main()
{
    int t,i,j,k,len1,len2,min,max;
    char str1[50],str2[50],str3[100];
    scanf("%d",&t);
    while(t--) {
        scanf("%s %s",&str1,&str2);
        len1=strlen(str1);
        len2=strlen(str2);
        min=(len1<len2?len1:len2);
        max=(len1>len2?len1:len2);
        for(i=0,j=0;j<min;i=i+2,j++) {
            str3[i]=str1[j];
        }
        for(i=1,j=0;j<min;i=i+2,j++) {
            str3[i]=str2[j];
        }
        if(len1 == len2)
            str3[i-1]='\0';
        else if(len1>len2) {
            for(i=min*2,j=min;j<max;i++,j++) {
                str3[i]=str1[j];
            }
            str3[i]='\0';
        }
        else if(len1<len2) {
            for(i=min*2,j=min;j<max;i++,j++) {
                str3[i]=str2[j];
            }
            str3[i]='\0';
        }
        printf("%s\n",str3);
    }
    return 0;
}
