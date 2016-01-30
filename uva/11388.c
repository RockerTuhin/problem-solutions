#include<stdio.h>
int main()
{
    long long x,y,t,u,v,gcd,lcm,temp;
    scanf("%d",&t);
    while(t--) {
        scanf("%lld %lld",&x,&y);
        if(x>y) {
            temp=x;
            x=y;
            y=temp;
        }
        u=x;
        v=y;
        while(u != v) {
            if(u>v) {
                u=u-v;
            }
            else if(u<v) {
                v=v-u;
            }
        }
        gcd=u;
        lcm=x*y/u;
        if(gcd == x && lcm == y) {
            printf("%lld %lld\n",gcd,lcm);
        }
        else {
            printf("-1\n");
        }
    }
    return 0;
}
