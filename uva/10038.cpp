#include<iostream>
using namespace std;
#include<cmath>
#include<algorithm>
int main() {
    int ele[3000],n,sum[3000],ara[3000],value,i;
    while(cin>>n) {
        value = 0;
        for(i = 0 ;i < n ; i++) {
            cin>>ele[i];
        }
        for(i = 0 ; i < (n-1) ; i++) {
            sum[i]=abs(ele[i]-ele[i+1]);
        }
        sort(sum , sum + (n-1) );
        for(i = 0; i < n-1 ; i++)
            ara[i] = i+1;
        /*for(i = 0 ; i < (n-1) ; i++) {
            cout<<sum[i]<<" ";
        }
        cout<<endl;
        for(i = 0; i < n-1 ; i++)
            cout<<ara[i]<<" ";
        cout<<endl;*/
        for(i = 0; i < n-1 ; i++) {
            if(ara[i] != sum[i])
                value = 1;
        }
        if(value == 1)
            cout<<"Not jolly"<<endl;
        else
            cout<<"Jolly"<<endl;
    }
    return 0;
}
