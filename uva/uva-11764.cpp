#include<iostream>
using namespace std;
int main() {
    int tcase,ara[50],t,i,n,high,low,j;
    cin>>tcase;
    for(t = 1 ; t <= tcase ; t++) {
        cin>>n;
        for(i = 0 ; i < n ; i++) {
            cin>>ara[i];
        }
        low = high = 0;
        for(i = 0 ; i < n-1 ; i++) {
            if(ara[i] > ara[i+1])
                low++;
            if(ara[i] < ara[i+1])
                high++;
        }
        cout<<"Case "<<t<<": "<<high<<" "<<low<<endl;
    }
    return 0;
}
