#include<stdio.h>
#include<math.h>
int main()
{
    long long tcase,a,b,c,i,big,power;
    scanf("%lld",&tcase);
    for(i=1;i<=tcase;i++) {
        scanf("%lld %lld %lld",&a,&b,&c);
        big=(a>b && a>c?a:b>c?b:c);
        if (big == a) {
            if(a*a == b*b + c*c) {
                printf("Case %lld: yes\n",i);
            }
            else {
                printf("Case %lld: no\n",i);
            }
        }
        else  if (big == b) {
            if(b*b == a*a + c*c) {
                printf("Case %lld: yes\n",i);
            }
            else {
                printf("Case %lld: no\n",i);
            }
        }
        else if (big == c) {
            if(c*c == b*b + a*a) {
                printf("Case %lld: yes\n",i);
            }
            else {
                printf("Case %lld: no\n",i);
            }
        }
    }
    return 0;
}
