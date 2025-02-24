#include <iostream>
#include <array>
using namespace std;

int main() {
    int n, m;
    int cnt=0, sum=0, min=-1;

    cin >> n >> m;

    for(int i=n; i<=m; i++) {
        for(int j=1; j<=i; j++) {
            if(i%j == 0) {
                cnt++;
            }
        }
        if(cnt==2) {
            if(min == -1) {
                min = i;
            }
            sum += i;
        }
        cnt = 0;
    }
    if(min == -1) {
        cout << min << "\n";
    }
    else {cout << sum << "\n" << min;}
}