#include<iostream>
using namespace std;
int main() {
    int n,i,t=1,b,sum = 0,ara[50],div,sum2 = 0,k;
    while(cin>>n) {
        sum = 0,sum2 = 0;
        if(n == 0)
            break;
        for(i = 0 ; i < n ; i++) {
            cin>>ara[i];
            sum = sum + ara[i] ;
        }
        div = sum / n ;
        for(i = 0 ; i < n ; i++) {
            if(ara[i] > div) {
                k = ara[i] - div;
                sum2 = sum2 + k;
            }
        }
        cout<<"Set #"<<t<<endl;
        cout<<"The minimum number of moves is "<<sum2<<"."<<endl;
        t++;
        cout<<endl;
    }
    return 0;
}
