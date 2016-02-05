#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,length,max;
    char str[1000];
    while(scanf("%[^\n]",str) == 1) {
        getchar();
        int count[255]={0};
        length=strlen(str);
        for(i=0;i<length;i++) {
            count[str[i]-'A']++;
        }
        max=count[0];
        for(k=65,j=0;k<=122;k++,j++) {
            if(k>=91 && k<=96)
                continue;
            if(count[j] > max) {
                max=count[j];
            }
        }
        for(k=65,j=0;k<=122;k++,j++) {
            if(count[j] == max) {
                printf("%c",k);
            }
        }
        printf(" ");
        printf("%d\n",max);
    }
    return 0;
}
