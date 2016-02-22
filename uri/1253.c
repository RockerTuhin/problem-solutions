#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,i,len;
    char str[50];
    scanf("%d",&t);
    getchar();
    while(t--) {
        scanf("%s",&str);
        getchar();
        len=strlen(str);
        scanf("%d",&n);
        for(i=0;i<len;i++) {
            if(str[i] >= 65 && str[i] <= 90) {
                if(str[i]-n < 65)
                    str[i]=91-(65-(str[i]-n));
                else
                    str[i]=str[i]-n;
            }
        }
        printf("%s\n",str);
    }
    return 0;
}
