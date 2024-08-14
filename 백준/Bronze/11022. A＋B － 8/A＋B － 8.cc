#include <iostream>
using namespace std;

int main() {
    int f, a, b, sum=0;

    cin >> f;
    int s[f];
    int ss[f][2];

    for(int i=0; i<f; i++) {
        a=0; b=0;
        cin >> a >> b;
        s[i] = a+b;
        ss[i][0] = a;
        ss[i][1] = b;
    }
    for(int i=0; i<f; i++) {
        cout << "Case #" << i+1 << ": "<< ss[i][0] << " + " << ss[i][1] << " = "<< s[i] << "\n";
    }
}