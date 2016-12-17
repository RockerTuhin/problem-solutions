#include<iostream>
using namespace std;
int main() {
    int tcase,n,test,test1,sum1,temp,count1,i,j,k,ara[10000];
    cin>>tcase;
    while(tcase--) {
        cin>>n>>test;
        i = 0;
        k = 0;
        count1 = 0;
        while(test--) {
            cin>>test1;
            for(sum1 = test1,temp = test1 ; temp <= n ; temp = temp + test1,sum1 = sum1 + test1 ) {
                ara[i] = sum1;
                if( ((sum1 % 7) != 6) && ((sum1 % 7) != 0) )
                    count1++;
                for(j = 0 ; j < k ; j++) {
                    if( (sum1 == ara[j] && ( ((sum1 % 7) != 6) && ((sum1 % 7) != 0) )) ) {
                        count1--;
                        break;
                    }
                }
                i++;
                k++;
            }
        }
        cout<<count1<<endl;
    }
    return 0;
}
