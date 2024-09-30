#include <iostream>
using namespace std;

int main() {
    int n, max=0, min=0;

    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    max = arr[0];
    min = arr[0];
    for(int j=0; j<n; j++) {
        if(max < arr[j]) {
            max = arr[j];
        }
        if(min > arr[j]) {
            min = arr[j];
        }
    }
    cout << min << " " << max;
}