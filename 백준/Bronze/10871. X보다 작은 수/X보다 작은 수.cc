#include <iostream>
using namespace std;

int main() {
    int n, x;

    cin >> n >> x;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for(int j=0; j<n; j++) {
        if(arr[j] < x) {
            cout << arr[j] << " ";
        }
    }
}