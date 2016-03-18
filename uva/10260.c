#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,value,temp;
    char str[20];
    while(scanf("%[^\n]",&str) == 1) {
        getchar();
        len=strlen(str);
        temp=0;
        for(i=0;i<len;i++) {
            if(str[i] == 'B' || str[i] == 'F' || str[i] == 'P' || str[i] == 'V')
                value=1;
            else if(str[i] == 'C' || str[i] == 'G' || str[i] == 'J' || str[i] == 'K' || str[i] == 'Q' || str[i] == 'S' || str[i] == 'X' || str[i] == 'Z')
                value=2;
            else if(str[i] == 'D' || str[i] == 'T')
                value=3;
            else if(str[i] == 'L')
                value=4;
            else if(str[i] == 'M' || str[i] == 'N')
                value=5;
            else if(str[i] == 'R')
                value=6;
            else if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'H' || str[i] == 'W' || str[i] == 'Y')
                value=0;
            if(value != temp && value != 0)
                printf("%d",value);
            temp=value;
        }
        printf("\n");
    }
    return 0;
}
