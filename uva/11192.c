#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[100];
    int n,n1,i,len,len1,k;
    while(scanf("%d",&n) == 1) {
        if(n == 0)
            break;
        getchar();
        gets(str);
        len=strlen(str);
        k=len/n;
        n1=k-1;
        int multi=2;
        for(i=0;i<len;i++) {
            if(i != 0 && i % k == 0)
                n1=(k*multi++)-1;
            str1[i]=str[n1--];
        }
        str1[i]='\0';
        puts(str1);
    }
    return 0;
}
