#include <iostream>
using namespace std;

int main() {
    int c, sum=0;
    cin>> c;

    for(int i=1; i<=c; i++) {
        sum += i;
    }
    cout << sum;
}