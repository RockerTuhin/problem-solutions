#include<iostream>
using namespace std;
#include<iomanip>
#include<math.h>
int main() {
    double p,n;
    double res;
    while(cin>>n>>p) {
        res=pow(p,1/n);
        cout<<fixed<<setprecision(0)<<res<<endl;
    }
    return 0;
}
///algorithm
/*This is a very easy mathematical problem. The formula is given. k^n = p. We can solve this with taking ln on each sides and calculating for k using k = e(ln(p)/n). But the formula below is easier.

Simplify k^n = p,

k^n = p
ln k^n = ln p
n ln k = ln p
ln k = (1/n) ln p
ln k = ln p^(1/n)
k = p^(1/n)
k = pow(p,1/n) */


