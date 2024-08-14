#include <iostream>
using namespace std;

int main() {
    int c, a, b, sum=0;

    cin >> c;
    int s[c];

    for(int i=0; i<c; i++) {
        a=0; b=0;
        cin >> a >> b;
        s[i] = a+b;
    }
    for(int i=0; i<c; i++) {
        cout << "Case #" <<i+1 << ": " << s[i] << "\n";
    }
}