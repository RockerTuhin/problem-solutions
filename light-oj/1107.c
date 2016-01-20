#include<stdio.h>
int main()
{
    int tcase,m,x1,y1,x2,y2,x,y,i;
    scanf("%d",&tcase);
    for(i=1;i<=tcase;i++) {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d",&m);
        printf("Case %d:\n",i);
        while(m--) {
            scanf("%d %d",&x,&y);
            if(x >= x1 && x <= x2 && y >= y1 && y <= y2)
                printf("Yes\n",i);
            else
                printf("No\n",i);
        }
    }
    return 0;
}

