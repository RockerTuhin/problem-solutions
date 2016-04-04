#include<stdio.h>
int main()
{
    int i,t,len,wid,hei;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d %d %d",&len,&wid,&hei);
        if(len <= 20 && wid <= 20 && hei <= 20)
            printf("Case %d: good\n",i);
        else
            printf("Case %d: bad\n",i);
    }
    return 0;
}
