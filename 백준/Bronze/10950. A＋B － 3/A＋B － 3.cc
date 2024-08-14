#include <iostream>
using namespace std;

int main() {
    int c, i=0;
    int a, b;

    cin >> c;
    int s[c];
    while(true) {
        cin >> a >> b;
        s[i] = a+b;
        ++i;
        if(i >=c) {
            break;
        }
    }
    for(int i=0; i<c; i++) {
        cout << s[i] << endl;
    }
}