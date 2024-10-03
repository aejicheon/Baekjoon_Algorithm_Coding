#include <iostream>
using namespace std;

int main() {
    int arr[9], max, n;
    max = arr[0];
    n=0;

    for(int i=0; i<9; i++) {
        cin >> arr[i];

        if(max < arr[i]) {
            max = arr[i];
            n = i+1;
        }
    }
    cout << max << "\n" << n;
}