#include<stdio.h>
#include<string.h>
int main()
{
    //checking a simple rule
    /*int i;
    for(i=0;i<5;i++) {
        //i=3;
        printf("%d-",i);
    }*/
    //start the problem
    char str1[100000],str2[100000];
    int i,j,len1,len2;
    while(scanf("%s %s",str1,str2) == 2) {
        len1=strlen(str1);
        len2=strlen(str2);
        int t=0,temp=0;
        for(i=0;i<len1;i++) {
            for(j=t;j<len2;j++) {
                if(str1[i] == str2[j]) {
                    t=j+1;
                    temp++;
                    break;
                }
            }
        }
        if(len1 == temp)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
