#include<stdio.h>
#include<string.h>
int main()
{
    int len,i;
    char str[30];
    while(scanf("%s",&str) == 1) {
        len=strlen(str);
        for(i=0;i<len;i++) {
            if(str[i] >= 'A' && str[i] <= 'C')
                str[i]=50;
            else if(str[i] >= 'D' && str[i] <='F')
                str[i]=51;
            else if(str[i] >= 'G' && str[i] <='I')
                str[i]=52;
            else if(str[i] >= 'J' && str[i] <='L')
                str[i]=53;
            else if(str[i] >= 'M' && str[i] <='O')
                str[i]=54;
            else if(str[i] >= 'P' && str[i] <='S')
                str[i]=55;
            else if(str[i] >= 'T' && str[i] <='V')
                str[i]=56;
            else if(str[i] >= 'W' && str[i] <='Z')
                str[i]=57;
        }
        printf("%s\n",str);
    }
    return 0;
}
