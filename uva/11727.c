#include<stdio.h>
int main()
{
    int i,t,n1,n2,n3,mid;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d %d %d",&n1,&n2,&n3);
        if((n1>n2 && n1<n3) || (n1<n2 && n1>n3))
           printf("Case %d: %d\n",i,n1);
        if((n2>n1 && n2<n3) || (n2<n1 && n2>n3))
           printf("Case %d: %d\n",i,n2);
        if((n3>n1 && n3<n2) || (n3<n1 && n3>n2))
           printf("Case %d: %d\n",i,n3);
    }
    return 0;
}
