#include<iostream>
using namespace std;
int main() {
    string word;
    int n,sum = 0,tcase;
    cin>>tcase;
    while(tcase--) {
        cin>>word;
        if(word == "donate") {
            cin>>n;
            sum=sum+n;
        }
        if(word == "report") {
            cout<<sum<<endl;
        }
    }
    return 0;
}
