#include<stdio.h>
int main()
{
    long long straight_cut,max_pieces,i;
    while(scanf("%lld",&straight_cut) == 1) {
        if(straight_cut < 0)
            break;
        max_pieces = 1;
        for(i = 0;i <= straight_cut;i++)
            max_pieces = max_pieces + i;
        printf("%lld\n",max_pieces);
    }
    return 0;
}
