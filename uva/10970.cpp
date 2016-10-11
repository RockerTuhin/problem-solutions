#include<iostream>
using namespace std;
#include<cstdio>
int main() {
    int num_of_row,num_of_col,ans;
    while(scanf("%d %d",&num_of_row,&num_of_col) == 2) {
        ans = (num_of_row*num_of_col)-1;
        cout<<ans<<endl;
    }
    return 0;
}
