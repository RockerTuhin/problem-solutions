#include<iostream>
using namespace std;
#include<math.h>
int main() {
    long long n;
    while(cin >> n) {
        if(n == 0)
            break;
        long long root = sqrt(n);
        if(root * root == n) {
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
    }
    return 0;
}
