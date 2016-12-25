#include<iostream>
#include<string>
using namespace std;
int main() {
    int len,n,temp,count1,i,j;
    string str;
    while(getline(cin, str)) {
        temp = 0;
        count1 = 0;
        len = str.length();
        if(len == 0) {
            cout<<endl;
            continue;
        }
        for(i = 0 ; i < len ; i++) {
            if(str[i] >= '0' && str[i] <= '9') {
                n = str[i]-48;
                temp = temp + n;
                count1++;
            }
            else if(str[i] == 'b') {
                for( j = 0 ; j < temp ; j++)
                    cout<<" ";
                temp = 0;
                count1++;
            }
            else if(str[i] == '!') {
                cout<<endl;
                temp = 0;
                count1++;
            }
            else {
                for(j = 0 ; j < temp ; j++)
                    cout<<str[count1];
                temp = 0;
                count1++;
            }
        }
        cout<<endl;
    }
    return 0;
}
