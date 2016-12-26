#include<iostream>
using namespace std;
int main() {
    int n,i,j,k,sum,temp[100],dig,ara[100];
    for(i = 0 ; ; i++) {
        cin>>ara[i];
        if(ara[i] == 0)
            break;
    }
    cout<<"PERFECTION OUTPUT"<<endl;
    for(i = 0 ;  ; i++) {
        if(ara[i] == 0)
            break;
        sum = 0;
        for(j = 1 ; j < ara[i] ; j++) {
            if(ara[i] % j == 0)
                sum = sum + j;
        }
        //cout<<"sum"<<sum<<endl;
        temp[i] = ara[i];
        dig = 0;
        //cout<<"temp["<<i<<"]"<<"-"<<temp[i]<<endl;
        while(ara[i] != 0) {
            ara[i] = ara[i]/10;
            dig++;
        }
        //cout<<"ara["<<i<<"]"<<"-"<<ara[i]<<endl;
        //cout<<"dig"<<dig<<endl;
        for(k = 5 ; k > dig ; k--)
            cout<<" ";
        if(temp[i] == sum)
            cout<<temp[i]<<"  PERFECT"<<endl;
        if(sum > temp[i])
            cout<<temp[i]<<"  ABUNDANT"<<endl;
        if(sum < temp[i])
            cout<<temp[i]<<"  DEFICIENT"<<endl;
    }
    cout<<"END OF OUTPUT"<<endl;
}
