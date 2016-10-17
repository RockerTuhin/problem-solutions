#include<iostream>
using namespace std;
int main() {
    long long a,l,count1,i = 1,temp;
    while(cin>>a>>l) {
        if(a < 0 && l <0)
            break;
        count1 = 0;
        temp = a;
        while (a != 1) {
            if(a % 2 == 0) {
                a = a/2;
                if(a > l || a > 2147483647)
                    break;
                count1++;
            }
            else if(a % 2 != 0) {
                a = (a*3)+1;
                if(a > l || a > 2147483647)
                    break;
                count1++;
            }
        }
        cout<<"Case "<<i<<": A = "<<temp<<", limit = "<<l<<", number of terms = "<<count1+1<<endl;
        i++;
    }
    return 0;
}
