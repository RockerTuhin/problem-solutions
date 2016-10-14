#include<iostream>
using namespace std;
#include<iomanip>
int main() {
    int ara[1000],i;
    double tcase,count1;
    double avg,ans,sum;
    cin>>tcase;
    while(tcase--) {
        double n;
        cin>>n;
        sum = 0;
        for(i = 0 ; i < n ; i++) {
            cin>>ara[i];
            sum = sum + ara[i];
        }
        avg = sum/n;
        count1 = 0;
        for(i = 0 ; i < n ; i++) {
            if(ara[i] > avg) {
                count1++;
            }
        }
        ans = (count1 * 100) / n;
        cout<<fixed<<setprecision(3)<<ans<<"%"<<endl;
    }
    return 0;
}
