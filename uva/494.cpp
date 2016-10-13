#include<iostream>
using namespace std;
#include<string>
int main() {
    string str;
    int len,sum,count1,i;
    while( getline(cin,str) ) {
        count1 = 0; sum = 0;
        len = str.length();
        for(i = 0 ; i < len ; i++) {
            if( (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') ) {
                count1 = 1;
            }
            else {
                sum = sum + count1;
                count1 = 0;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
