#include<iostream>
#include<iomanip>
using namespace std;
long double fac(long double a) {
    long double sum = 1;
    long double i;
    for(i = 2; i <= a ; i++) {
        sum = sum * i;
    }
    return sum;
}
int main() {
    long double n,m,c;
    while(cin>>n>>m) {
        if( n == 0 && m == 0)
            break;
        c= fac(n)/(fac(n-m) * fac (m));
        cout<<n<<" things taken "<<m<<" at a time is "<<fixed<<setprecision(0)<<c<<" exactly."<<endl;
    }
}
