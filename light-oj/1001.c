#include<stdio.h>
int main()
{
    int n,i,T,a,b,temp,count;
    scanf("%d",&T);
    count=0;
    while(T--) {
       scanf("%d",&n);
       if(count==0 || temp != n) {
       a=0;
       b=n;
       }
       if(a>n || b<0) {
          break;
       }
       if(a>10) {
        b=a-10;
        a=10;
       }
       if(b>10) {
        a=b-10;
        b=10;
       }
       if(temp != n) {
            printf("%d %d\n",a,b);
            temp=n;
       }
       else if (temp == n) {
            printf("%d %d\n",a,b);
            temp=n;
       }
       a++;b--;count++;
    }
    return 0;
}
