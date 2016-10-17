#include<iostream>
using namespace std;
int main() {
    int n,k,ans,t1,t2,t3,temp;
    while(cin>>n>>k) {
        ans = 0;
        temp = n;
        do {
            t1 = n / k ;
            t2 = n % k;
            t3 = t1 + t2;
            n = t3;
            ans = ans + t1;
        } while(t3 >= k);
        cout<<temp + ans<<endl;
    }
    return 0;
}
