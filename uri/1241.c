#include<stdio.h>
#include<string.h>
int main()
{
    int t,length1,length2,i,j,count;
    char str1[1000],str2[1000];
    scanf("%d",&t);
    while(t--) {
        count=0;
        scanf("%s",str1);
        scanf("%s",str2);
        length1=strlen(str1);
        length2=strlen(str2);
        for(i=length1-1,j=length2-1;j>=0;i--,j--) {
            if(str1[i] == str2[j])
                count++;
        }
        if(count == length2)
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }
    return 0;
}
