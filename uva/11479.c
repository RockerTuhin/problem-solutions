#include<stdio.h>
int main()
{
    int t,i;
    long long a,b,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a+b <= c || b+c <= a || c+a <= b)
            printf("Case %d: Invalid\n",i);
        else if(a == b && b == c)
            printf("Case %d: Equilateral\n",i);
        else if(a == b || b == c || c == a)
            printf("Case %d: Isosceles\n",i);
        else if(a != b && b != c && c != a)
            printf("Case %d: Scalene\n",i);
    }
    return 0;
}
