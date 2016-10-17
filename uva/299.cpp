#include<iostream>
using namespace std;
int main() {
    int tcase,n,i,j,ara[50],temp,count1;
    cin>>tcase;
    while(tcase--) {
        cin>>n;
        for(i = 0 ; i < n ; i++) {
            cin>>ara[i];
        }
        count1 = 0;
        for(i = n-2 ; i >= 0 ; i--) {
            for(j = 0 ; j <= i ; j++) {
                if(ara[j] > ara[j+1]) {
                    temp = ara[j];
                    ara[j] = ara[j+1];
                    ara[j+1] = temp;
                    count1++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<count1<<" swaps."<<endl;
    }
    return 0;
}
