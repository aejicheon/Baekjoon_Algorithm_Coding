#include <iostream>
using namespace std;

int main() {
    int c;
    cin >> c;

    for(int i=0; i<c; i++) {
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << "\n";
    }
}