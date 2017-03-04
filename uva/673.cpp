#include<iostream>
using namespace std;
#include<stack>
int main() {
    ///stack <char> st;
    int tcase,i;
    cin>>tcase;
    string s;
    getline(cin,s);
    while(tcase--) {
        ///cin>>s;
        getline(cin,s);
        int len = s.length();
        stack <char> st;
        for(i = 0 ; i < len ; i++) {
            if(st.empty() == 0 && s[i] == ')' && st.top() == '(')
                st.pop();
            else if(st.empty() == 0 && s[i] == ']' && st.top() == '[')
                st.pop();
            else
                st.push(s[i]);
        }
        if(st.empty() == 1)
            cout<<"Yes"<<endl;
        else///if(st.empty())
            cout<<"No"<<endl;
    }
}
