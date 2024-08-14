#include <iostream>
using namespace std;

int main() {
    int n, four;

    cin >> n;

    while(1) {
        four = n / 4;

        for(int i=0; i<four; i++) {
            cout << "long ";
        }
        break;
    }
    cout << "int";
}