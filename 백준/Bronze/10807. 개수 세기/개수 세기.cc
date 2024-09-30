#include <iostream>
using namespace std;

int main() {
    int n, h, g=0;

    cin >> n;
    int num[n];

    for(int i=0; i<n; i++) {
        cin >> num[i];
    }
    cin >> h;
    for(int j=0; j<n; j++) {
        if(num[j] == h) {
            g++;
        }
    }
    cout << g;
}