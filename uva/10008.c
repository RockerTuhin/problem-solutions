#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,k,max,len,count[26]={0};
    char str[1000];
    scanf("%d\n",&t);
    while(t--) {
        scanf("%[^\n]",&str);
        getchar();
        len=strlen(str);
        for(i=0;i<len;i++) {
            if(str[i] >= 97 && str[i] <= 122)
                str[i]=str[i]-32;
        }
        for(i=0;i<len;i++) {
            count[str[i]-'A']++;
        }
    }
    /*max=count[0];
    for(i=0;i<=26;i++) {
        if(count[i] > max)
            max=count[i];
    }*/
    max = 0;
    for(i = 65, j = 0; i <= 90; i++, j++){
            if(count[j] >= max)
                max = count[j];
        }
    for(k=max;k>0;k--) {
        for(i=65,j=0;i<=90;i++,j++) {
            if(count[j] == k)
                printf("%c %d\n",i,count[j]);
        }
    }
    return 0;
}
